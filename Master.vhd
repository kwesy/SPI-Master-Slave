----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:35:02 10/28/2023 
-- Design Name: 
-- Module Name:    Master - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Master is
--	 Generic(
--		N : integer := 8
--		--clk_div : integer := 100
--	 );
    Port ( dataIn : in STD_LOGIC_VECTOR(7 downto 0);
			  clk : in  STD_LOGIC;
			  rst : in STD_LOGIC;
			  miso : in  STD_LOGIC;
			  ld : in STD_LOGIC; -- load data for transmission
			  RXData : buffer STD_LOGIC_VECTOR(7 downto 0);
			  ready : out STD_LOGIC;
			  mosi : out STD_LOGIC;
           sclk : buffer  STD_LOGIC;
           ss : out  STD_LOGIC);  -- active low
end Master;

architecture Behavioral of Master is
    type spiControllerFsmType is (
        ST_IDLE,
        ST_TX_RX
    );

    signal clkCounter : integer range 0 to 7 := 0;
	 constant clockDivider : integer := 4;
	 signal sclken : STD_LOGIC := '0';

    signal CurrentState : spiControllerFsmType := ST_IDLE;
    signal NextState : spiControllerFsmType;
    signal ShiftRegister : STD_LOGIC_VECTOR(7 downto 0); -- data to be sent
	 signal BitCounter : integer range 0 to 7 := 0;
	 

begin
    ----------------------------------------------------------FSM
	 
	 p_gen_clk: process(clk, rst ,sclken)
	 begin
		if rst='1' then 
			sclk <= '0'; -- for mode CPOL=0
			clkCounter <= 0;
		elsif rising_edge(clk) and sclken = '1' then
			if clkCounter < clockDivider - 1 then
				clkCounter <= clkCounter + 1;
			else
				clkCounter <= 0;
				sclk <= not sclk;
			end if ;
		end if;
		if sclken = '0' then
				sclk <= '0';
		end if;

	 end process p_gen_clk;
			
			
	state_manager : process(clk, rst, CurrentState)
	begin
		  if rst = '1' then
            NextState <= ST_IDLE;
        elsif rising_edge(clk) then
				if ld = '1' then
					NextState <= ST_TX_RX;
			   end if;
				if BitCounter > 8 then
					NextState <= ST_IDLE;
				end if;
		  end if;
		  CurrentState <= NextState;
	end process state_manager;
			

    p_comb : process(clk, sclk, ld, CurrentState)
    begin
			if rising_edge(clk) and ld = '1' then
				ShiftRegister <= dataIn;
			end if;
			
			case CurrentState is
				 when ST_IDLE =>
					  ShiftRegister <= "00000000";
					  mosi <= '0';
					  BitCounter <= 0;
					  ss <= '1'; -- active low
					  ready <= '1';
					  sclken <= '0';						  
					  

				 when ST_TX_RX =>				
					ready <= '0';
					ss <= '0';
					sclken <= '1';
					if rising_edge(sclk) then
						report "sclk enabled" severity note;
					  if BitCounter <= 7 then
							report "Transferring byte" severity note;
							mosi <= ShiftRegister(7);
							ShiftRegister <= ShiftRegister(6 downto 0) & '0';
					  end if;
					  BitCounter <= BitCounter + 1;
					elsif falling_edge(sclk) then
					  RXData <= RXData(6 downto 0) & miso;
					end if;
			end case;        
    end process;
end Behavioral;
