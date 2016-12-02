#pragma once
#include "IHealth.h"

namespace TomCat {
	class Health : public IHealth {
	public:
		Health(int, int, int);
		~Health();
		int GetLevel(int);
		void TrainAttribute(int, int);
		void PrintStats();
	private:
		int _hunger, _curiosity, _speed, _hungerLimit;
	};
}