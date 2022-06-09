#include "Grower.h"

Grower::Grower(std::string name, Gardener* gardener) : Worker("Grower", name), gardener(gardener) {}

std::string Grower::getName()
{
	return Worker::getName();
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> flowers)
{
	std::cout << this->getName() << " forwards the request to " << gardener->getName() << "." << std::endl;
	FlowersBouquet* bouquet = gardener->prepareBouquet(flowers);
	std::cout << gardener->getName() << " returns flowers to " << this->getName() << "." << std::endl;
	return bouquet;
}