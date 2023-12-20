COMPILER=em++
SRC=src/*.cpp
OUTPUT=deploy/wasm.js

FLAGS=--bind

INCLUDE=-Iinclude

all : $(SRC)
	$(COMPILER) $(SRC) $(FLAGS) $(INCLUDE) -o $(OUTPUT)