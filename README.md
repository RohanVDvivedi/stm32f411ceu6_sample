# STM32F411 template bare metal programming

This is a sample project for bare metal programming STM32F411 black pill board

### setup requirements

* stm32f411ceu6 microcontroller, with default factory bootloader (must)
* Linux debian
* sublime/vi/vim/gedit any
* ARM cross compiler toolchain
  * sudo apt-get install gcc-arm-none-eabi binutils-arm-none-eabi
* To program the controller you will need either of the following options
  1. using usb to uart controller
    * stm32flash to flash the controller, considering the controller has default factory bootloader
      * sudo apt-get install stm32flash
    * usb to uart converter
      * PL2303HX, CP2102, ftdi etc
  2. using stlink
    * install stlink toolchain
    * stlinkv2 programmer
* linker script and the startup code(with flash and ram addresses modified)
  * The project uses them directly copied from the arm crosscompiler toolchain samples and examples
  * it is tedious and generally unproductive to write them, but a very healthy mental excercise for people not used to them like myself.

#### [STM32F10x Reference Manual](https://www.st.com/resource/en/reference_manual/rm0383-stm32f411xce-advanced-armbased-32bit-mcus-stmicroelectronics.pdf)

I do not recommend baremetal programming.  
*1st May'2020 edit : I do recommend bare metal programming now, projects based on this template have made me learn immensely, since then.*
