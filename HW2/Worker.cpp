#include "Worker.h"
#include <iostream>

std::string role;

Worker::Worker(std::string role, std::string name) : Person(name), role(role) {}

std::string Worker::getName() { return (role + " " + Person::getName()); }
