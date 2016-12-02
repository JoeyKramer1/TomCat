#include <iostream>
#include "Health.h"

namespace TomCat {
	Health::Health(int Hunger, int Curiosity, int Speed)
		: _hunger(Hunger)
		, _curiosity(Curiosity)
		, _speed(Speed)
		, _hungerLimit(Hunger)
	{
	}

	Health::~Health() {
		std::cout << "Health deconstructor" << std::endl;
	}

	int Health::GetLevel(int Attribute) {
		switch(Attribute) {
			case 0:
				return _hunger;
				break;
			case 1:
				return _curiosity;
				break;
			case 2:
				return _speed;
				break;
			default:
				return -1;
				break;
		}
	}

	void Health::TrainAttribute(int Attribute, int Modifier) {
		switch(Attribute) {
			case 0:
				_hunger += Modifier;
				if (_hunger >= _hungerLimit)
					_hunger = _hungerLimit;
				break;
			case 1:
				_curiosity += Modifier;
				break;
			case 2:
				_speed += Modifier;
				break;
			default:
				break;
		}
	}

	void Health::PrintStats() {
		std::cout << std::endl << "Hunger: " << _hunger << std::endl
							   << "Curiosity: " <<_curiosity << std::endl
							   << "Speed: " << _speed << std::endl;
	}
}