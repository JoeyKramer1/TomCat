#pragma once
#include "ICat.h"

namespace TomCat {
	class CatFactory {
	public:
		ICat* CreateCat(const int *);
	};
}