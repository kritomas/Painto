#include <iostream>
#include <emscripten/val.h>
#include <string>
#include "jsbindings.hpp"

int main(int argc, char* argv[])
{
	js::console.call<emscripten::val>("log", (std::string)"Hello world");
	emscripten::val canvas = js::document.call<emscripten::val>("getElementById", (std::string)"canvas");
	emscripten::val ctx = canvas.call<emscripten::val>("getContext", (std::string)"2d");
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			//double mult = 255/5.0;
			double mult = 255/2.0;
			std::string color = "rgba(" + std::to_string(i * mult) + ", " + std::to_string(j * mult) + ", 0, 1)";
			std::cout << color << std::endl;
			ctx.set("fillStyle", color);
			ctx.call<void>("fillRect", j * 25, i * 25, 25, 25);
		}
	}
	return 0;
}