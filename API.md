# API @iiot2k/hdc1080
hdc1080 temperature and humidity sensor library

The driver is loaded on call with ```require("@iiot2k/hdc1080");```<br>
On 64bit OS the driver ***hdc1080_arm64.node*** is loaded.<br>
On 32bit OS the driver ***hdc1080_arm32.node*** is loaded.<br>

## Port Parameter
The ```port``` parameter specifies the i2c port number.<br>
For example port 1 is the port address **i2c-1**.<br>
Port addresses 0 to 9 are possible.<br>

>### Error function
```error_text()```<br>
***return:*** ```<string>``` error text after call function.<br>

> ### Init sensor<br>
```init(port, heater)```<br>
- ***port:*** ```<integer>``` 0..9<br>
- ***heater:*** ```<boolean>``` if ```false``` heater off, if ```true``` heater on.<br>
- ***return:*** ```<boolean>```, ```true``` on ok, ```false``` on error.<br>

> ### Turn internal heater on/off<br>
```set_heater(port, heater)```<br>
- ***port:*** ```<integer>``` 0..9<br>
- ***heater:*** ```<boolean>``` if ```false``` heater off, if ```true``` heater on.<br>
- ***return:*** ```<boolean>```, ```true``` on ok, ```false``` on error.<br>

> ### Reads temperature and humidity<br>
```read_sync(port, heater)```<br>
- ***port:*** ```<integer>``` 0..9<br>
- ***heater:*** ```<boolean>``` if ```false``` heater off, if ```true``` heater on.<br>
- ***return:*** ```<number array>``` first temperature in °C, second humidity in %, ```<undefined>``` on error.<br>
