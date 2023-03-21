# Introduction:
The Arduino Uno is equipped with the ATmega16U2 chip, which functions as a USB-to-serial converter. Its primary function is to convert USB signals from a computer into serial signals that the Arduino's main processing unit, the Atmel AVR microcontroller, can understand.
The Atmega16U2 chip comes pre-programmed with firmware that enables it to act as a USB device, allowing the Arduino to appear as a virtual serial port on a computer. This feature lets users program and communicate with the Arduino board over USB, eliminating the need for an external USB-to-serial converter.
Besides its USB-to-serial conversion capabilities, the Atmega16U2 chip can also be reprogrammed to perform other functions, such as emulating other USB devices.

We will be replacing the stock firmware on the Atmega16U2 chip with a custom firmware that will allow the Arduino to function as a USB keyboard. 

It's important to note that flashing any firmware other than the stock firmware will lead to the loss of USB serial functionality and the board will no longer be programmable.  
To restore the Arduino to its original state and regain its full functionality, simply flash the stock firmware onto the Board.


# Changing Firmware


### Download Firmware Files:
[Keyboard Firmware](Firmware/Arduino-keyboard-0.3.hex)   
[Stock Firmware](Firmware/Arduino-usbserial-atmega16u2-Uno-Rev3.hex)


### Install Flashing Tool:
[Dfu-programmer](https://github.com/dfu-programmer/dfu-programmer)   
    
On Arch Linux:   
```pacman -S dfu-programmer dfu-util```


### Set Arduino to DFU Mode:
[Follow the official guide](https://support.arduino.cc/hc/en-us/articles/4410804625682-Set-a-board-to-DFU-mode)


### Flash the Firmware:
```sudo dfu-programmer atmega16u2 erase```  
    
```sudo dfu-programmer atmega16u2 flash "firmware-file.hex"``` 
      
```sudo dfu-programmer atmega16u2 reset```   
   
