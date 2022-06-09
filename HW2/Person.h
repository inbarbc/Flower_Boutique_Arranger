#pragma once
#include <iostream>
#include <vector>

class Florist;
class FlowersBouquet;

class Person
{
protected:
	std::string name;
public:
	Person(std::string);
	virtual std::string getName();
	void orderFlowers(Florist*, Person*, std::vector<std::string>);
	void acceptFlowers(FlowersBouquet*);
};
