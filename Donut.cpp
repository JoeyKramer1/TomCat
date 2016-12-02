#include <iostream>
#include "Donut.h"

namespace TomCat {
	Donut::~Donut() { std::cout << "Removing Donut" << std::endl;}
	int Donut::MealValue() { return 50; }
}