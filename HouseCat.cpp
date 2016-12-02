#include <iostream>
#include "HouseCat.h"

namespace TomCat {
	HouseCat::HouseCat(IHealth *Health)
	{
		_health = Health;
		std::cout << "HouseCat constructor" << std::endl;
	}

	HouseCat::~HouseCat() {
		delete(_health);
		std::cout << "HouseCat deconstructor" << std::endl;
	}

	std::string HouseCat::Saying() {
		return "quiet meow";
	}
}