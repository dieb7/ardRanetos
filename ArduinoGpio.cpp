/*
 * ArduinoGpio.cpp
 *
 *  Created on: Aug 24, 2018
 *      Author: diebm
 */

#include "ArduinoGpio.h"
#include "Arduino.h"

bool ArduinoGpio::isOutput() {
	return this->output;
}

void ArduinoGpio::setOutput(bool output) {
	pinMode(pinNumber, output ? OUTPUT : INPUT);
	this->output = output;
}

bool ArduinoGpio::isOn() {
	return bool(digitalRead(pinNumber));
}

void ArduinoGpio::setOn(bool on) {
	digitalWrite(pinNumber, on);
}
