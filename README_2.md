# Arduino Uno HID Keyboard

The Arduino Uno is a microcontroller board based on the Atmel AVR microcontroller. It comes with an ATmega16U2 chip that functions as a USB-to-serial converter, enabling the board to communicate with a computer over USB. By default, the ATmega16U2 chip is programmed with firmware that allows it to act as a USB device, appearing as a virtual serial port on the computer.

The stock firmware on the ATmega16U2 chip can be replaced with custom firmware that allows the Arduino Uno to function as a USB keyboard. This enables the board to send keystrokes to a computer, just like a regular keyboard. 

**Important note:** Flashing any firmware other than the stock one will lead to the loss of USB serial functionality and the board will no longer be programmable. So you should first upload your code to the board and then change the firmware. If you need to update or change your code later on, you will have to reflash the stock firmware and then upload the new code. Once you have uploaded the new code, you can proceed to flash the keyboard firmware again, if needed.


## Getting Started

### Prerequisites

Before starting, you'll need the following:

- An Arduino Uno board
- A computer running Windows, macOS, or Linux
- The [Keyboard Firmware](Firmware/Arduino-keyboard-0.3.hex) and [Stock Firmware](Firmware/Arduino-usbserial-atmega16u2-Uno-Rev3.hex) files
- The dfu-programmer tool

### Installing dfu-programmer

dfu-programmer is a command-line tool for programming Atmel AVR microcontrollers.  
   
To install it on Arch Linux run the following command:   
```sudo pacman -S dfu-programmer dfu-util```   

On other OS, you can download dfu-programmer from its [GitHub repository](https://github.com/dfu-programmer/dfu-programmer).


### Setting the Arduino Uno to DFU Mode

To flash the custom firmware onto the ATmega16U2 chip, you'll need to put the Arduino Uno into Device Firmware Update (DFU) mode. Follow the official [Arduino guide](https://support.arduino.cc/hc/en-us/articles/4410804625682-Set-a-board-to-DFU-mode) to do this.


### Flashing the Firmware

To flash the custom firmware onto the ATmega16U2 chip, follow these steps:   

1. Connect the Arduino Uno to your computer via USB and [set it to DFU mode](#setting-the-arduino-uno-to-dfu-mode).
2. Open a terminal window and navigate to the directory where the firmware files are located.
3. Erase the ATmega16U2 chip by running the following command:   
```sudo dfu-programmer atmega16u2 erase```   

4. Flash the keyboard firmware onto the ATmega16U2 chip by running the following command:   
```sudo dfu-programmer atmega16u2 flash "keyboard-firmware.hex"```   

   Replace `keyboard-firmware.hex` with the actual name of the keyboard firmware file.

5. Reset the Arduino Uno by running the following command:   
```sudo dfu-programmer atmega16u2 reset```   

   This will cause the ATmega16U2 chip to restart with the new firmware.

6. Unplug and replug the board.
   
   Now it should get connected to computer as a USB keyboard.

**To restore the Arduino Uno to its original state and regain its full functionality, simply repeat the above steps, but flash the stock firmware file instead of the custom firmware file.**

