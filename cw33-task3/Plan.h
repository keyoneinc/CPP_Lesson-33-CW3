#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

namespace Mobile {
	class Plan
	{
	protected:
		string name;
	public:
		Plan();
		Plan(string name);

		void setName(string name);
		string getName() const;

		virtual void showInfo() const = 0;
		virtual double calcPrice(int seconds) const = 0;



	};
}


