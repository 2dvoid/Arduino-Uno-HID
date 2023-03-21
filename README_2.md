# Arduino Uno USB Keyboard Firmware

The Arduino Uno is a microcontroller board based on the Atmel AVR microcontroller. It comes with an ATmega16U2 chip that functions as a USB-to-serial converter, enabling the board to communicate with a computer over USB. By default, the ATmega16U2 chip is programmed with firmware that allows it to act as a USB device, appearing as a virtual serial port on the computer.

This project replaces the stock firmware on the ATmega16U2 chip with custom firmware that allows the Arduino Uno to function as a USB keyboard. This enables the board to send keystrokes to a computer, just like a regular keyboard. 

**Important note:** Flashing any firmware other than the stock firmware will lead to the loss of USB serial functionality and the board will no longer be programmable. To restore the Arduino Uno to its original state and regain its full functionality, simply flash the stock firmware back onto the board.

## Getting Started

### Prerequisites

Before starting, you'll need the following:

- An Arduino Uno board
- A computer running Windows, macOS, or Linux
- The custom firmware and stock firmware files
- The dfu-programmer tool

### Installing dfu-programmer

dfu-programmer is a command-line tool for programming Atmel AVR microcontrollers. To install it on Linux (e.g., Arch Linux), run the following command:   
```sudo pacman -S dfu-programmer dfu-util```   


On Windows or macOS, you can download dfu-programmer from its [GitHub repository](https://github.com/dfu-programmer/dfu-programmer).

### Setting the Arduino Uno to DFU Mode

To flash the custom firmware onto the ATmega16U2 chip, you'll need to put the Arduino Uno into Device Firmware Update (DFU) mode. Follow the official [Arduino guide](https://support.arduino.cc/hc/en-us/articles/4410804625682-Set-a-board-to-DFU-mode) to do this.

### Flashing the Firmware

To flash the custom firmware onto the ATmega16U2 chip, follow these steps:   

1. Connect the Arduino Uno to your computer via USB.
2. Open a terminal window and navigate to the directory where the firmware files are located.
3. Erase the ATmega16U2 chip by running the following command:
```sudo dfu-programmer atmega16u2 erase```   

4. Flash the custom firmware onto the ATmega16U2 chip by running the following command:
```sudo dfu-programmer atmega16u2 flash "keyboard-firmware.hex"```   

   Replace `keyboard-firmware.hex` with the actual name of the custom firmware file.

5. Reset the Arduino Uno by running the following command:
```sudo dfu-programmer atmega16u2 reset```   


This will cause the ATmega16U2 chip to restart with the new firmware.

To restore the Arduino Uno to its original state and regain its full functionality, simply repeat the above steps, but flash the stock firmware file instead of the custom firmware file.

