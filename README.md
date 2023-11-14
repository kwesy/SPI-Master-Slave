# Hardware SPI Protocol

The SPI protocol is a bidirectional serial communication protocol that involve a master and slave(s).

There are four 4 pins required to setup the connection.

| Pins                                               | Description                                    |
| -------------------------------------------------- | ---------------------------------------------- |
| MOSI                                               | Master sends data on this pin to slave         |
| MISO                                               | Slave sends data on this pin to master         |
| SCLK                                               | clock signal to synch data transfer            |
| <span style="text-decoration: overline;">SS</span> | Use to select slave device to communicate with |
  
    

![SPI Master and Slave Relationship](300px-SPI_three_slaves.svg.png)

## Modes

Data can be read on falling or rising edge of the clock signal (SCLK). There are two parameters that determines the modes of operation.

* ```CPOL``` is used to determine the clock's polarity. When CPOL is 0, the clock(SCLK) idles low. The leading edge rises and the trailing edge falls. When 1, the clock(SCLK) idles high. Thus, the leading edge is a falling edge and the trailing edge is a rising edge.

* ```CPHA``` determines which clock edge the data is read. When CPHA is 0, the data is read on the leading edge. When 1, data is read on the trailing edge of the clock pulse.

### SPI Modes Number
| SPI mode | CPOL  | CPHA  |
| :------: | :---: | :---: |
|    0     |   0   |   0   |
|    1     |   0   |   1   |
|    2     |   1   |   0   |
|    3     |   1   |   1   |





# SPI-Master-Slave
