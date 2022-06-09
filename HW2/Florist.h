#pragma once
#include "Worker.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"

class Florist : public Worker
{
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;
public:
	Florist(std::string, Wholesaler*, FlowerArranger*, DeliveryPerson*);
	std::string getName();
	void acceptOrder(Person*, std::vector<std::string>);

};

