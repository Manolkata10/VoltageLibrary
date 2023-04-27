#include "VoltageReader.h"

VoltageReader::VoltageReader()
{
	i2c.openFile(0x58);
}

VoltageReader::~VoltageReader()
{
	i2c.closeFile();
}

float VoltageReader::getVoltage(int index)
{
	char writeData[1] = {(index % 4) + 0x30};
	unsigned char readData[2] = {0, 0};

	i2c.sendFile(writeData, 1);
	i2c.readFile(readData, 2);

	int temp = buffer[1];
	temp <<= 8;
	temp |= buffer[0];

	return (3.3*temp)/1023;
}