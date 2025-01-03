# @iiot2k/hdc1080

[![platform](https://img.shields.io/badge/platform-Raspberry--Pi-ff69b4)](https://www.raspberrypi.com/)

hdc1080 temperature and humidity sensor

<a href="https://www.buymeacoffee.com/iiot2ka" target="_blank"><img src="https://cdn.buymeacoffee.com/buttons/default-blue.png" height="41" width="174"></a><br>
If you like my work and find it helpful, please support me.

## Installation
This library works only on Raspberry Pi with 64bit OS.<br>
*32bit OS is no longer supported.*<br>

```
npm install @iiot2k/hdc1080
```

or add in your ```package.json```:

```json
"dependencies": {
    "@iiot2k/hdc1080": "latest"
},
```

[View on npm](https://www.npmjs.com/package/@iiot2k/hdc1080)📌<br>
[View on GitHub](https://github.com/iiot2k/hdc1080)📌<br>
[Report any issues here](https://github.com/iiot2k/hdc1080/issues)📌

## [hdc1080](https://www.ti.com/product/hdc1080)📌 14bit temperature and humidity sensor
- temperature accuracy 0.2°C
- temperature range -40 to 125°C
- relative humidity accuracy 2%
- relative humidity range 0 to 100%
- response time 20ms
- internal heater

## Usage
- The output value is mV or adc raw data.
- Enable I2C with raspi-config.
- In this case i2c-1 is enabled (port=1).
- If you use i2c-0 port add<br>
  ```dtparam=i2c_vc=on```<br>
  to *config.txt*,<br>
  then Pin27=SDA, Pin28=SCK.<br>
- For other ports add this to *config.txt*.
- The default i2c speed is 100kHz, to speed up add/change this line in *config.txt*:<br>
```dtparam=i2c_arm=on,i2c_arm_baudrate=400000```

## Internal Heater
In a humid environment, condensation forms on the sensor.<br>
The sensor cannot then measure correctly.<br>
This condensation can be removed using the internal heater.<br>
After researching the forums, the heater function is described as follows:<br>
- The heater is only switched on during measurements (~20ms).
- The sensor cannot warm up at slow cycle.<br>
- For heating, the sensor must be queried with a fast cycle.<br>
- If there is a lot of condensation, the sensor switches from 100% humidity to 0%.<br>

The library turns on the heater and queries the sensor every 50ms to heat up the sensor.<br>
You can set the heater switch-on time from 50ms (1x) to 12.75s (255x).<br>
During this time, a measurement is not possible.<br>

## Node.js API
Node.js API functions are explained in document **API.md**<br>
Node.js examples are on **examples** folder.<br>

## C++ API
This library uses C++ addon modules as interface to hardware.<br>
Therefore, there is also a C++ interface to the drivers.<br>

Some C++ examples are in the **cpp** directory.<br>
The C++ API functions are described in the header file **hdc1080_lib.h**


