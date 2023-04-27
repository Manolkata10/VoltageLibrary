#include "VoltageReader.h"
#include <iostream>

int main()
{
	VoltageReader vr;

	std::cout << getVoltage(0) << std::endl;
	std::cout << getVoltage(1) << std::endl;
	std::cout << getVoltage(2) << std::endl;
	std::cout << getVoltage(3) << std::endl;
	return 0;

}