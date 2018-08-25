/*
 * ArduinoGpio.h
 *
 *  Created on: Aug 24, 2018
 *      Author: diebm
 */

#ifndef ARDUINOGPIO_H_
#define ARDUINOGPIO_H_

#include "IGpio.h"

class ArduinoGpio: public ranetos::IGpio {
	unsigned char pinNumber;
	bool output;
public:
	ArduinoGpio(unsigned char pinNumber, bool output): pinNumber(pinNumber) {
		setOutput(output);

	}
	virtual ~ArduinoGpio() {}

	bool isOutput();
	void setOutput(bool output);
	bool isOn();
	void setOn(bool on);
};

#endif /* ARDUINOGPIO_H_ */
