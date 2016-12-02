#pragma once
#include "IFood.h"

namespace TomCat {
	class Fish : public IFood {
	public:
		~Fish();
		int MealValue();
	};
}