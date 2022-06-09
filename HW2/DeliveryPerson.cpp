#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name) : Worker("Delivery Person", name) {}

std::string DeliveryPerson::getName() {
	return Worker::getName();
}

void DeliveryPerson::deliver(Person* person, FlowersBouquet* bouquet)
{
	std::cout << this->getName() << " delivers flowers to " << person->getName() << "." << std::endl;
	person->acceptFlowers(bouquet);
}
