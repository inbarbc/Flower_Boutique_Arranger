#pragma once
#include "Worker.h"
#include "Grower.h"

class Wholesaler : public Worker
{
private:
	Grower* grower;
public:
	Wholesaler(std::string, Grower*);
	std::string getName();
	FlowersBouquet* acceptOrder(std::vector<std::string>);
};

