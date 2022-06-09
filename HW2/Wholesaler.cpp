#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name, Grower* grower) : Worker("Wholesaler", name), grower(grower) {}

std::string Wholesaler::getName()
{
	return Worker::getName();
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers)
{
	std::cout << this->getName() << " forwards the request to " << grower->getName() << "." << std::endl;
	FlowersBouquet* bouquet = grower->prepareOrder(flowers);
	std::cout << grower->getName() << " returns flowers to " << this->getName() << "." << std::endl;
	return bouquet;
}