#include "Gardener.h"

Gardener::Gardener(std::string name) : Worker("Gardener", name) {}

std::string Gardener::getName()
{
	return Worker::getName();
}

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers)
{
	std::cout << this->getName() << " prepares flowers." << std::endl;
	FlowersBouquet* bouquet = new FlowersBouquet(flowers);
	return bouquet;

}