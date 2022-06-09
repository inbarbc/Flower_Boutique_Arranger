#include "Florist.h"

Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson)
	: Worker("Florist",name), wholesaler(wholesaler), flowerArranger(flowerArranger), deliveryPerson(deliveryPerson) {}

std::string Florist::getName() {
	return Worker::getName();
}

void Florist::acceptOrder(Person* person, std::vector<std::string> flowers)
{
	std::cout << this->getName() << " forwards request to " << wholesaler->getName() << "." << std::endl;
	FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers);
	std::cout << wholesaler->getName() << " returns flowers to "  << this->getName() << "." << std::endl;
	std::cout << this->getName() << " request flowers arrangement from " << flowerArranger->getName() << "." << std::endl;
	flowerArranger->arrangeFlowers(bouquet);
	std::cout << flowerArranger->getName() <<  "returns arranged flowers to " << this->getName() << "." << std::endl;
	std::cout << this->getName() << " forwards flowers to " << deliveryPerson->getName() << "." << std::endl;
	deliveryPerson->deliver(person, bouquet);
}
