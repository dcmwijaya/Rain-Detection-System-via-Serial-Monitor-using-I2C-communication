[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Rain-Detection-System-via-Serial-Monitor-using-I2C-communication?logo=Codeforces&logoColor=white&color=%23F7DF1E)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)
![Type](https://img.shields.io/badge/Type-Personal%20Experiment-light.svg?style=flat&logo=gitbook&logoColor=white&color=%23F7DF1E)

# Rain-Detection-System-via-Serial-Monitor-using-I2C-communication
<strong>Solo Project: Rain Detection System via Serial Monitor using I2C communication</strong><br><br>
Rain is a natural phenomenon that often occurs in several countries, especially tropical regions like Indonesia. This phenomenon can be a blessing and can also be a disaster for some people. Basically, this project was created to help the community in terms of rain detection. In addition, it aims to educate as well as make a real contribution to technological development. This project has been done and took approximately 3 days. This device can work well with or without water. When in wet conditions, the sensor will turn on the LED and send a response according to the situation. When dry, the sensor will turn off the LED and send a response according to the situation. The innovation applied in this project is I2C communication. The system interface can be accessed via Serial Monitor.

<br><br>

## Project Requirements
| Part | Description |
| --- | --- |
| Development Board | • Arduino Mega 2560<br>• Arduino Nano V3 |
| Code Editor | Arduino IDE |
| Driver | CH340 USB Driver |
| Communications Protocol | Inter Integrated Circuit (I2C) |
| Programming Language | C/C++ |
| Arduino Library | Wire (default) |
| Actuators | LED (x1) |
| Sensor | MH-RD: Raindrop Sensor Module (x1) |
| Other Components | • USB type B cable - USB type A (x1)<br>• Mini USB cable - USB type A (x1)<br>• Jumper cable (1 set) |

<br><br>

## Download & Install
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://bit.ly/ArduinoIDE_Installer
   ```

   </td></tr></table><br>
   
2. CH340 USB Driver

   <table><tr><td width="810">

   ```
   https://bit.ly/CH340_USB_Driver
   ```

   </td></tr></table>
   
<br><br>

## Project Designs
<table>
<tr>
<th width="420">Pictorial Diagram</th>
<th width="420">Wiring</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Diagram/Pictorial Diagram.jpg" alt="pictorial-diagram"></td>
<td><img src="Assets/Documentation/Table/Device Wiring.jpg" alt="wiring"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Block Diagram</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Diagram/Block Diagram.jpg" alt="block-diagram"></td>
</tr>
</table>

<br><br>

## Basic Knowledge
Basically, a device can be communicated with other devices either wirelessly or by cable. Communication between commonly used hardware is ``` Serial Communication ```. It can be known that there are three types of ``` Serial Communication ```, which include: ``` UART (Universal Asynchronous Receiver-Transmitter) ```, ``` SPI (Serial Peripheral Interface) ```, and ``` I2C (Inter Integrated Circuit) ```. ``` I2C (Inter Integrated Circuit) ``` is a two-way serial communication standard that uses two channels to send data ``` (OUTPUT from Master to Slave) ``` and receive data ``` (INPUT from Slave to Master) ```. I2C uses two bidirectional lines: ``` Serial Data (SDA) ``` and ``` Serial Clock (SCL) ``` to transfer data and synchronize communication between devices. Each device connected to the ``` I2C bus ``` has a unique address that identifies it during communication. The ``` I2C protocol ``` allows multiple devices to share the same bus, and each device can act as a ``` master ``` or a ``` slave ```. ``` Master ``` is the primary device that has full authority over the control of the Slave, while the ``` Slave ``` is the secondary device that is under the authority of the Master device.

<br><br>

## Arduino IDE Setup
1. Open the ``` Arduino IDE ``` first, then open this project by clicking ``` File ``` -> ``` Open ``` : 

   <table><tr><td width="810">
   
      • ``` I2C_Master.ino ```
      
      • ``` I2C_Slave.ino ```

   </td></tr></table><br>
   
2. ``` Board Setup ``` in Arduino IDE

   <table>
      <tr><th>
         
      i
         
      </th><th width="780">
            
      How to setup the ``` Arduino Mega 2560 ``` board
   
      </th></tr>
      <tr><td colspan="2">

      Click ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Mega or Mega 2560 ```
              
      </td></tr>
   </table><br><table>
      <tr><th>
         
      ii
         
      </th><th width="775">

      How to setup the ``` Arduino Nano ``` board
            
      </th></tr>
      <tr><td colspan="2">

      Click ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Nano ```
            
      </td></tr>
   </table><br>

3. ``` Change Processor ``` in Arduino IDE

   <table>
      <tr><th>
         
      i
         
      </th><th width="780">
            
      How to change the processor of ``` Arduino Mega 2560 ``` board
   
      </th></tr>
      <tr><td colspan="2">

      There is nothing to change (Skip it)
              
      </td></tr>
   </table><br><table>
      <tr><th>
         
      ii
         
      </th><th width="775">

     How to change the processor of ``` Arduino Nano ``` board
            
      </th></tr>
      <tr><td colspan="2">

      Click ``` Tools ``` -> ``` Processor ``` -> ``` ATmega328P (Old Bootloader) ```
            
      </td></tr>
   </table><br>
   
4. ``` Port Setup ``` in Arduino IDE

   <table><tr><td width="810">
         
      Click ``` Port ``` -> Choose according to your device port ``` (you can see in device manager) ```

   </td></tr></table><br>

5. Before uploading the program please click: ``` Verify ```.<br><br>

6. If there is no error in the program code, then please click: ``` Upload ```.<br><br>

7. If there is still a problem when uploading the program, then try to check the ``` driver ``` / ``` port ``` / ``` others ``` section.

<br><br>

## Get Started
1. Download and extract this repository.<br><br>
   
2. Make sure you have the necessary electronic components.<br><br>
   
3. Make sure your components are designed according to the diagram.<br><br>
   
4. Configure your device according to the settings above.<br><br>

5. Please enjoy [Done].

<br><br>

## Highlights
<table>
<tr>
<th width="840">Rain Detection Device</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Experiment/Device.jpg" alt="hardware"></td>
</tr>
</table>
<table>
<tr>
<th width="840" colspan="2">Serial Monitor</th>
</tr>
<tr>
<td width="420"><img src="Assets/Documentation/Experiment/Not Raining.jpg" alt="serialmonitor-1"></td>
<td width="420"><img src="Assets/Documentation/Experiment/Rain Warning.jpg" alt="serialmonitor-2"></td>
</tr>
</table>

<br><br>

## Appreciation
If this work is useful to you, then support this work as a form of appreciation to the author by clicking the ``` ⭐Star ``` button at the top of the repository.

<br><br>

## Disclaimer
This application is my own work and is not the result of plagiarism from other people's research or work, except those related to third party services which include: libraries, frameworks, and so on.

<br><br>

## LICENSE
MIT License - Copyright © 2024 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.
