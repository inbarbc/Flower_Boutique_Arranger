#pragma once
#include <iostream>
#include <vector>
#include "Person.h"

class Worker : public Person
{
protected:
	std::string role;
public:
	Worker(std::string, std::string);
	virtual std::string getName();
};

