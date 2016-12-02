#pragma once
#include <iostream>
#include "ICat.h"
#include "IFood.h"

namespace TomCat {
	class HouseCat : public ICat{
	public:
		HouseCat(IHealth *Health);
		~HouseCat();
		std::string Saying();
	};
}