#pragma once
#include <iostream>
#include "ICat.h"
#include "IHealth.h"
namespace TomCat {
	class TabbyCat : public ICat {
	public:
		TabbyCat(IHealth *Health);
		~TabbyCat();
		std::string Saying();
	};
}