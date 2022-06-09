#pragma once
#include "Worker.h"

class FlowersBouquet
{
protected:
	std::vector<std::string> bouquet;
	bool is_arranged;
public:
	FlowersBouquet(std::vector<std::string>);
	std::vector<std::string> getBouquet();
	void arrange();
};

