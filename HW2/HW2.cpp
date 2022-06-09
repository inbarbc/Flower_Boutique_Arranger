#include <iostream>
#include <vector>
#include "Person.h"
#include "Wholesaler.h"
#include "Florist.h"
#include "Grower.h"
#include "Gardener.h"
#include "FlowerArranger.h"
#include "FlowersBouquet.h"
#include "DeliveryPerson.h"
#include "HW2.h"

int main(int argc, char** argv)
{
    Person* Chris = new Person("Chris");
    Person* Robin = new Person("Robin");
    Gardener* Garett = new Gardener("Garett");
    Grower* Gray = new Grower("Gray", Garett);
    Wholesaler* Watson = new Wholesaler("Watson", Gray);
    FlowerArranger* Flora = new FlowerArranger("Flora");
    DeliveryPerson* Dylan = new DeliveryPerson("Dylan");
    Florist* Fred = new Florist("Fred", Watson, Flora, Dylan);
    std::vector<std::string> flowers = { "Roses", "Violets", "Gladiolus" };

    Chris->orderFlowers(Fred, Robin, flowers);

    delete Chris;
    delete Robin;
    delete Garett;
    delete Gray;
    delete Watson;
    delete Flora;
    delete Dylan;
    delete Fred;
}

