#pragma once
#include "Person.h"
#include "Worker.h"

class DeliveryPerson : public Worker
{
public:
	DeliveryPerson(std::string);
	std::string getName();
	void deliver(Person*, FlowersBouquet*);
};

