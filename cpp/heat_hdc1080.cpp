/*
 * example turns heater on and reads hdc1080 sensor and prints value
 *
 * build:
 * > make
 *
  * run:
 * > ./heat_hdc1080
 *
 * heat_hdc1080.cpp
 *
 */

#include <stdio.h>

#include "hdc1080_lib.h"

#define PORT 1 // i2c-1
#define HEAT_TIME 2 // 2 * 50ms = 100ms

int main()
{
    double temperature;
    double humidity;

    // init sensor
    bool ret = hdc1080::init(PORT);

    if (!ret)
    {
        printf("error on init: %s\n", hdc1080::error_text());
        return 1;
    }

    // turn sensor heater on
    ret = hdc1080::set_heater(PORT, HEAT_TIME);

    if (!ret)
    {
        printf("error on heat: %s\n", hdc1080::error_text());
        return 1;
    }

    // read sensor data
    ret = hdc1080::read(PORT, temperature, humidity);

    if (ret)
        printf("temperature: %.1f°C humidity: %.1f%%\n", temperature, humidity);
    else
        printf("error on read: %s\n", hdc1080::error_text());

    return 0;
}


