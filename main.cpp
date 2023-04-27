#include "../I2CLib/i2c.h"
#include <iostream>

int main()
{
	I2C i2c;
	unsigned char buffer[2] = {0, 0};
	i2c.openFile(0x58);

	char sender[1] = {0x30};
	i2c.sendFile(sender, 1);
	i2c.readFile(buffer, 2);

	int temp = buffer[1];
	temp <<= 8;
	temp |= buffer[0];

	vcc = (3.3*temp)/1023;
	printf("AN1: %.3fV\n", vcc);

	i2c.closeFile();
	return 0;

}