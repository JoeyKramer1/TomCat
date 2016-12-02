#pragma once
#include "ICat.h"

namespace TomCat {
	class IMenu {
	public:
		virtual ~IMenu(){};
		virtual ICat* CreateCat() = 0;
		virtual void PrintMenu() = 0;
		virtual int MenuOption(const int*) = 0;
	};
}