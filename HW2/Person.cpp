#include "Person.h"
#include "Florist.h"
#include "FlowersBouquet.h"

std::string name;

Person::Person(std::string name) : name(name) {}

std::string Person::getName() { return name; }

void Person::orderFlowers(Florist* florist, Person* person, std::vector<std::string> flowers) {
	std::string concatenate = flowers[0];
	for (int i = 1; i < flowers.size(); i++) {
		concatenate += ", " + flowers[i];
	}
	std::cout << getName() << " order flowers to " << person->getName() << " from " << florist->getName() << ": " << concatenate << "." << std::endl;
	florist->acceptOrder(person, flowers);
}

void Person::acceptFlowers(FlowersBouquet* bouquet) {
	std::vector<std::string> flowers = bouquet->getBouquet();
	std::string concatenate = flowers[0];
	for (int i = 1; i < flowers.size(); i++) {
		concatenate += ", " + flowers[i];
	}
	std::cout << getName() << " accepts the flowers: " << concatenate << "." << std::endl;
}