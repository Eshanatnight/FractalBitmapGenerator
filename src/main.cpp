#include <iostream>

#include "FractalCreator.h"
#include "RGB.h"
#include "Zoom.h"

using namespace Fractal;

int main()
{
	std::cout << "[Starting..........]" << std::endl;
	FractalCreator fractalCreator(1920, 1080);

	fractalCreator.addRange(0.0, RGB(0,0,0));
	fractalCreator.addRange(0.3, RGB(206, 95, 237));
	// fractalCreator.addRange(0.5, RGB(220, 200, 0));
	fractalCreator.addRange(1.0, RGB(220, 20, 60));
	fractalCreator.addRange(0.3, RGB(0, 0, 0));
	fractalCreator.addRange(0.5, RGB(255, 100, 150));
	fractalCreator.addRange(1.0, RGB(255, 240, 255));

	fractalCreator.addZoom(Zoom(632, 382, 0.1));
	fractalCreator.addZoom(Zoom(964, 655, 0.1));
	fractalCreator.addZoom(Zoom(855, 810, 0.06));
	fractalCreator.addZoom(Zoom(948, 582, 0.1));
	fractalCreator.addZoom(Zoom(424, 471, 0.1));
	fractalCreator.run("Mandelbrot.bmp");

	std::cout << "[Finished..........]" << std::endl;
	return 0;
}