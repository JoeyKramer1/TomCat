#pragma once
#include "IFood.h"

namespace TomCat {
	class FoodFactory {
	public:
		IFood* Chef(int);
	};
}