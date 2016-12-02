#pragma once
#include "IFood.h"
#include <iostream>
#include "IHealth.h"

namespace TomCat {
	class ICat {
	public:
		virtual ~ICat(){};
		virtual std::string Saying() = 0;
		
		void FeedFood(IFood* Food) {
			_health->TrainAttribute(0, Food->MealValue());
			delete(Food);
		}

		int GetAttributeLevel(int Attribute) {
			return _health->GetLevel(Attribute);
		}

		void TrainAttribute(int Attribute, int Modifier) {
			_health->TrainAttribute(Attribute, Modifier);
		}

		void PrintStats() {
			_health->PrintStats();
		}

		void StartRound() {
		}

		void EndRound() {
			_health->TrainAttribute(0, -10);
		}

	protected:
		IHealth* _health;
	};
}