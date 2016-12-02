#pragma once
#include "IFood.h"

namespace TomCat {
	class Donut : public IFood {
	public:
		~Donut();
		int MealValue();
	};
}