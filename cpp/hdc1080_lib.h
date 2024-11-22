/*
 * C++ library for hdc1080 temperature and humidity sensor
 *
 * (c) Derya Y. iiot2k@gmail.com
 *
 * link libraries on build:
 * libhdc1080_arm32.a for 32bit OS
 * libhdc1080_arm64.a for 64bit OS
 *
 * hdc1080_lib.h
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
 * @brief inits hdc1080 sensor
 * @param port i2c port (0..9)
 * @heater true: heater on, false: heater off
 * @returns true: ok, false: error
 */
bool init(uint8_t port, bool heater);

/**
 * @brief turns hdc1080 sensor heater on/off
 * @param port i2c port (0..9)
 * @heater true: heater on, false: heater off
 * @returns true: ok, false: error
 */
bool heater(uint8_t port, bool heater);

/**
 * @brief reads single hdc1080 input
 * @param port i2c port (0..9)
 * @param temperature to read and store
 * @param humidity to read and store
 * @returns true: ok, false: error
 */
bool read(uint8_t port, double& temperature, double& humidity);

} // namespace
