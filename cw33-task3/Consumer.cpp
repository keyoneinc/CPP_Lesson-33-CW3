#include "Consumer.h"

Mobile::Consumer::Consumer()
{
	name = "undefined";
	phone = "none";
	cash = 0;
	plan = nullptr;
}

Mobile::Consumer::Consumer(string name, string phone, double cash, Plan* plan)
{
	this->name = name;
	this->phone = phone;
	this->cash = cash;
	this->plan = plan;
}

void Mobile::Consumer::showInfo() const
{
	cout << "Name: " << name << endl;
	cout << "Phone: " << phone << endl;
	cout << "Cash: " << cash << endl;
	if (plan == nullptr) {
		cout << "Consumer hasn't got an active plan" << endl;
	}
	else {
		plan->showInfo();
	}
}

void Mobile::Consumer::makeCall(int seconds)
{
	try {
		float p = plan->calcPrice(seconds);
		cash -= p;
	}
	catch (const std::exception* ne) {
		cout << ne->what() << endl;
	}
}
