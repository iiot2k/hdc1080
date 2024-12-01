// example turns heater on and reads sensor temperature and humidity
// run:
// node heat_hdc1080.js

"use strict";

const sensor = require("../hdc1080");
const HEATER_TIME = 10; // 10 x 50ms = 500ms
const PORT = 1; // // i2c-1

var ret = sensor.init(PORT);

if (!ret)
    console.log(sensor.error_text());
else {
    sensor.set_heater(PORT, HEATER_TIME, (retval) => {
        if (!retval)
            console.log(sensor.error_text());
        else {
            var data = sensor.read_sync(PORT);

            if (data === undefined)
                console.log(sensor.error_text());
            else {
                console.log("Temperature:", data[0], "°C");
                console.log("Humidity:", data[1], "%");
            }
        }
    });
}
