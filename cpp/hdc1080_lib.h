/*
 * C++ library for hdc1080 temperature and humidity sensor
 *
 * (c) Derya Y. iiot2k@gmail.com
 *
 * link libraries on build:
 * libhdc1080_arm64.a for 64bit OS
 *
 * hdc1080_lib.h
 *
 * Note: all functions are thread-safe
 *
 */

#pragma once

#include <stdint.h>

namespace hdc1080 {

/**
 * @brief gets error text after call functions
 * @returns error text
 */
const char* error_text();

/**
 * @brief inits hdc1080 sensor to default configuration
 * @param port i2c port (0..9)
 * @returns true: ok, false: error
 */
bool init(uint8_t port);

/**
 * @brief turns hdc1080 sensor heater on/off
 * @param port i2c port (0..9)
 * @param heater_time turn on time in heater_time x 50ms (max 255 x 50ms = 12.75s), 0 turns heater off
 * @returns true: ok, false: error
 * @note if heater_time > 0 function blocks until heater is off
 */
bool set_heater(uint8_t port, uint8_t heater_time);

/**
 * @brief reads hdc1080 temperature and humidity
 * @param port i2c port (0..9)
 * @param temperature to read and store
 * @param humidity to read and store
 * @returns true: ok, false: error
 */
bool read(uint8_t port, double& temperature, double& humidity);

} // namespace
