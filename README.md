[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Rain-Detection-System-with-I2C-communication)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Rain-Detection-System-with-I2C-communication
<strong>Solo Project: Rain Detection System with I2C communication</strong><br><br>
Coming Soon...

<br><br>

## Project Requirements
| Part | Description |
| --- | --- |
| Development Board | • Arduino Mega 2560<br>• Arduino Nano V3 |
| Code Editor | Arduino IDE |
| Driver | USB-Serial CH340 |
| Communications Protocol | Inter Integrated Circuit (I2C) |
| Programming Language | C/C++ |
| Actuators | LED (x1) |
| Sensor | MH-RD: Raindrop Sensor Module (x1) |
| Other Components | • USB type B cable - USB type A (x1)<br>• Mini USB cable - USB type A (x1)<br>• Jumper cable (1 set) |

<br><br>

## Download & Install
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://www.arduino.cc/en/software
   ```

   </td></tr></table><br>
   
2. USB-Serial CH340

   <table><tr><td width="810">

   ```
   https://bit.ly/CH340_Driver
   ```

   </td></tr></table>
   
<br><br>

## Project Designs
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="" alt="Block-Diagram"></td>
<td><img src="" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Wiring</th>
</tr>
<tr>
<td><img width="840" src="" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Basic Knowledge
Basically, a device can be communicated with other devices either wirelessly or by cable. Communication between commonly used hardware is ``` Serial Communication ```. It can be known that there are three types of ``` Serial Communication ```, which include: ``` UART (Universal Asynchronous Receiver-Transmitter) ```, ``` SPI (Serial Peripheral Interface) ```, and ``` I2C (Inter Integrated Circuit) ```. ``` I2C (Inter Integrated Circuit) ``` is a two-way serial communication standard that uses two channels to send data ``` (OUTPUT from Master to Slave) ``` and receive data ``` (INPUT from Slave to Master) ```. I2C uses two bidirectional lines: ``` Serial Data (SDA) ``` and ``` Serial Clock (SCL) ``` to transfer data and synchronize communication between devices. Each device connected to the ``` I2C bus ``` has a unique address that identifies it during communication. The ``` I2C protocol ``` allows multiple devices to share the same bus, and each device can act as a ``` master ``` or a ``` slave ```. ``` Master ``` is a device that initiates data transfer on the ``` I2C Bus ``` by forming a Start signal, terminates data transfer by forming a Stop signal, and generates a clock signal. ``` Slave ``` is a device that is addressed by the master.

<br><br>
