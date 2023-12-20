COMPILER=em++
SRC=src/*.cpp
OUTPUT=deploy/wasm.js

all : $(SRC)
	$(COMPILER) $(SRC) -o $(OUTPUT)