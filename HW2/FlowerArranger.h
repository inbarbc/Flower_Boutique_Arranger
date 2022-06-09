#pragma once
#include "Worker.h"
#include "FlowersBouquet.h"

class FlowerArranger : public Worker
{
public:
	FlowerArranger(std::string);
	std::string getName();
	void arrangeFlowers(FlowersBouquet*);
};

