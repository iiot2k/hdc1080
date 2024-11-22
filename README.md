# @iiot2k/hdc1080

[![platform](https://img.shields.io/badge/platform-Raspberry--Pi-ff69b4)](https://www.raspberrypi.com/)

hdc1080 temperature and humidity sensor

<a href="https://www.buymeacoffee.com/iiot2ka" target="_blank"><img src="https://cdn.buymeacoffee.com/buttons/default-red.png" height="41" width="174"></a><br>
Thanks for the coffee !! 😁

## Installation
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

## Usage
- This library works on Raspberry Pi with 32bit or 64bit OS.
- The output value is °C and %rH.
- Enable I2C with raspi-config.
- In this case i2c-1 is enabled (port=1).
- If you use i2c-0 port add<br>
  **dtparam=i2c_vc=on**<br>
  to /boot/config.txt,<br>
  then Pin27=SDA, Pin28=SCK.<br>
- For other ports add this to /boot/config.txt.

## Examples
Node.js example is in examples folder<br>
C++ example is in cpp folder


