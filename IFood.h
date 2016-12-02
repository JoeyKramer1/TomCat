#pragma once

namespace TomCat {
	class IFood {
	public:
		virtual ~IFood(){};
		virtual int MealValue() = 0;
	};
}