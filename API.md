# API @iiot2k/hdc1080
hdc1080 temperature and humidity sensor library

The driver is loaded on call with ```require("@iiot2k/hdc1080");```<br>
On 64bit OS the driver ***hdc1080_arm64.node*** is loaded.<br>

## Port Parameter
The ```port``` parameter specifies the i2c port number.<br>
For example port 1 is the port address **i2c-1**.<br>
Port addresses 0 to 9 are possible.<br>

### Version function
```version()```<br>
***return:*** ```<string>``` version of addon.<br>

>### Error function
```error_text()```<br>
***return:*** ```<string>``` error text after call function.<br>

> ### Init sensor<br>
```init(port)```<br>
- ***port:*** ```<integer>``` 0..9<br>
- ***return:*** ```<boolean>```, ```true``` on ok, ```false``` on error.<br>

> ### Turn internal heater on/off<br>
```set_heater(port, heater_time, callback)```<br>
- ***port:*** ```<integer>``` 0..9<br>
- ***heater_time*** ```<integer>``` 0..255, heater_time x 50ms (max 255 x 50ms = 12.75s), 0 turns heater off<br>
- ***callback:*** ```<function> (retval)```
    - **retval** ```<boolean>``` ```true``` on ok, ```false``` on error.<br> 

> ### Reads temperature and humidity<br>
```read_sync(port)```<br>
- ***port:*** ```<integer>``` 0..9<br>
- ***return:*** ```<number array>``` first temperature in °C, second humidity in %, ```<undefined>``` on error.<br>
