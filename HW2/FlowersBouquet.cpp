#include "FlowersBouquet.h"

std::vector<std::string> bouquet;

bool is_arranged;

FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet) : bouquet(bouquet), is_arranged(false) {}

std::vector<std::string> FlowersBouquet::getBouquet()
{
	return bouquet;
}

void FlowersBouquet::arrange()
{
	is_arranged = true;
}
