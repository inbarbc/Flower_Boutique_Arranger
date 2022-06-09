#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name) : Worker("Flower Arranger", name) {}

std::string FlowerArranger::getName() {
	return Worker::getName();
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* bouquet)
{
	std::cout << this->getName() << " arrange flowers." << std::endl;
	bouquet->arrange();
}
