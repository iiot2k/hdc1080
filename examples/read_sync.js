// example reads sensor temperature and humidity
// run:
// node read_sync.js

"use strict";

const sensor = require("../hdc1080");

var ret = sensor.init(
    1, // i2c-1
    false, // turn heater off
);

if (!ret)
    console.log(sensor.error_text());
else {
    var data = sensor.read_sync(
        1, // i2c-1
        );

    if (data === undefined)
        console.log(sensor.error_text());
    else {
        console.log("Temperature:", data[0].toFixed(1), "°C");
        console.log("Humidity:", data[1].toFixed(1), "%");
    }
}
