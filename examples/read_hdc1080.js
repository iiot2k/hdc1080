// example reads sensor temperature and humidity
// run:
// node read_hdc1080.js

"use strict";

const sensor = require("../hdc1080");
const PORT = 1; // // i2c-1

var ret = sensor.init(PORT);

if (!ret)
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
