#include <iostream>
#include <emscripten/val.h>
#include "jsbindings.hpp"

int main(int argc, char* argv[])
{
	js::console.call<emscripten::val>("log", (std::string)"Hello world");
	return 0;
}