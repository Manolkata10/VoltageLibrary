#include "../I2CLib/i2c.h"

class VoltageReader
{
	private:
		I2C i2c;

	public:
		float getVoltage(unsigned char index);

		VoltageReader();
		~VoltageReader();
};
