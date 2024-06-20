#pragma once
#include <vector>
#include <algorithm>
#include "SecondsPlan.h"
#include "MinutesPlan.h"
using std::vector;

namespace Mobile {
	class Provider
	{
		string name;
		vector<Plan*> Array;
	public:
		Provider();
		Provider(string name);
		~Provider();

		void setName(string name);
		string getName() const;

		void addPlan(Plan* obj);


	};
}
