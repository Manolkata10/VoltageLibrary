#include "VoltageReader.h"
#include <iostream>

int main()
{
	VoltageReader vr;

	std::cout << vr.getVoltage(0) << std::endl;
	std::cout << vr.getVoltage(1) << std::endl;
	std::cout << vr.getVoltage(2) << std::endl;
	std::cout << vr.getVoltage(3) << std::endl;
	return 0;

}