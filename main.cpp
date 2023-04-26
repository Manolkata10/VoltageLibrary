#include "../I2CLib/i2c.h"
#include <iostream>

int main()
{
	I2C i2c;
	unsigned char buffer[2] = {0, 0};
	i2c.openFile(0x58);

	char sender[1] = {0x30};
	i2c.sendFile(sender, 1);
	i2c.closeFile();
	i2c.openFile(0x58);

	i2c.readFile(buffer, 2);

	std::cout << (int)buffer[0] << std::endl;
	std::cout << (int)buffer[1] << std::endl;
	return 0;

}