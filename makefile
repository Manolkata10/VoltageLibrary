all: remote

OUTPUT_NAME=voltagelib
COMPILER=g++
CONFIG=
BUILD=$(COMPILER) $^ $(CONFIG) -o $(OUTPUT_NAME)

local: main.cpp ../I2CLib/i2c.cpp
		make clean
		$(BUILD)

remote: main.cpp ../I2CLib/i2c.cpp
		make clean
		git pull
		$(BUILD)

clean:
	rm -f $(OUTPUT_NAME)