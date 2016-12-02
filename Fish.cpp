#include <iostream>
#include "Fish.h"

namespace TomCat {
	Fish::~Fish() { std::cout << "Removing Fish" << std::endl;}
	int Fish::MealValue() { return 20; }
}