#pragma once
#include "Worker.h"
#include "FlowersBouquet.h"

class Gardener : public Worker
{
public:
	Gardener(std::string);
	std::string getName();
	FlowersBouquet* prepareBouquet(std::vector<std::string>);
};

