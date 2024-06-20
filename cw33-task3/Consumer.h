#pragma once
#include "Plan.h"

namespace Mobile {
	class Consumer {
		string name;
		string phone;
		double cash;
		Plan* plan;

	public:
		Consumer();
		Consumer(string name, string phone, double cash, const Plan* plan);

		void showInfo() const;
		void makeCall(int seconds);

	};
}

