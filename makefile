all: remote

OUTPUT_NAME=voltagelib
COMPILER=g++
CONFIG=
BUILD=$(COMPILER) $^ $(CONFIG) -o $(OUTPUT_NAME)

local: main.cpp
		make clean
		$(BUILD)

remote: main.cpp
		make clean
		git pull
		$(BUILD)

clean:
	rm -f $(OUTPUT_NAME)