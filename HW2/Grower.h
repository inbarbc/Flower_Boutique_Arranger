#pragma once
#include "Worker.h"
#include "Gardener.h"

class Grower : public Worker
{
private:
	Gardener* gardener;
public:
	Grower(std::string, Gardener*);
	std::string getName();
	FlowersBouquet* prepareOrder(std::vector<std::string>);
};

