COMPILER=em++
SRC=src/*.cpp
OUTPUT=deploy/wasm.js

FLAGS=--bind -O0

INCLUDE=-Iinclude

all : $(SRC)
	$(COMPILER) $(SRC) $(FLAGS) $(INCLUDE) -o $(OUTPUT)