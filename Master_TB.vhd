library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Master_tb is
end Master_tb;

	architecture TB of Master_tb is
    signal clk, rst, miso, ld, mosi, sclk, ss , ready: std_logic;
    signal dataIn, RXData : std_logic_vector(7 downto 0);

    component Master
        port (
            dataIn   : in std_logic_vector(7 downto 0);
            clk      : in std_logic;
            rst      : in std_logic;
            miso     : in std_logic;
            ld       : in std_logic;
            RXData   : buffer std_logic_vector(7 downto 0);
            ready    : out std_logic;
            mosi     : out std_logic;
            sclk     : buffer std_logic;
            ss       : out std_logic
        );
    end component;

begin
    DUT: Master
        port map (
            dataIn   => dataIn,
            clk      => clk,
            rst      => rst,
            miso     => miso,
            ld       => ld,
            RXData   => RXData,
            ready    => ready,
            mosi     => mosi,
            sclk     => sclk,
            ss       => ss
        );

    -- Clock generation process
    process
    begin
        clk <= '0';
        wait for 0.5 ns;
        clk <= '1';
        wait for 0.5 ns;
    end process;

    -- Stimulus generation process
    process
	 constant byte : STD_LoGIC_VECTOR(7 downto 0) := "10011001";
    begin
        -- Initialize signals
        rst <= '1';
        dataIn <= "11001001";  -- Example data to transmit
        ld <= '0';
--        miso <= '0';

        wait for 1 ns;
        rst <= '0';  -- Release reset

        -- Generate SPI communication sequence
        wait for 1 ns;
        ld <= '1';
        wait for 2 ns;
        ld <= '0';

        -- Simulate data transfer
        for i in 0 to 7 loop
				report "for loop" severity note;
            wait until rising_edge(sclk);
				miso <= byte(i);
        end loop;

        wait for 1 ns;

        -- Add additional test cases here

        wait;
    end process;

    -- Monitor the results
--    process
--    begin
--        wait for 5 ns;
--        assert ready = '1' report "SPI communication not completed" severity failure;
--        report "SPI communication completed successfully" severity note;
--        wait;
--    end process;

end TB;
