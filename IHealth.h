#pragma once

namespace TomCat {
	class IHealth {
	public:
		virtual ~IHealth(){};
		virtual int GetLevel(int) = 0;
		virtual void TrainAttribute(int, int) = 0;
		virtual void PrintStats() = 0;
	};
}