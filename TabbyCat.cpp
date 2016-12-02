#include <iostream>
#include "TabbyCat.h"

namespace TomCat {
	TabbyCat::TabbyCat(IHealth *Health)
	{
		_health = Health;
		std::cout << "TabbyCat constructor" << std::endl;
	}

	TabbyCat::~TabbyCat() {
		delete(_health);
		std::cout << "TabbyCat deconstructor" << std::endl;
	}

	std::string TabbyCat::Saying() {
		return "MEOWWWW";
	}
}