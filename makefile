all: remote

OUTPUT_NAME=main
COMPILER=g++
CONFIG=
BUILD=$(COMPILER) $^ $(CONFIG) -o $(OUTPUT_NAME)

local: i2c.cpp
		make clean
		$(BUILD)

remote: i2c.cpp
		make clean
		git pull
		$(BUILD)

clean:
	rm -f $(OUTPUT_NAME)