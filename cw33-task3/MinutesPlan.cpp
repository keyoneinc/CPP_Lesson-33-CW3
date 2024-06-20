#include "MinutesPlan.h"

Mobile::MinutesPlan::MinutesPlan()
{
	priceOfMinute = 0;
}

Mobile::MinutesPlan::MinutesPlan(string name, float priceOfMinute) : Plan(name)
{
	if (priceOfMinute < 0) {
		throw new PriceException();
	}
	this->priceOfMinute = priceOfMinute;
}

void Mobile::MinutesPlan::setPriceOfMinute(float priceOfMinute)
{
	this->priceOfMinute = priceOfMinute;
}

float Mobile::MinutesPlan::getPriceOfMinute() const
{
	return priceOfMinute;
}

void Mobile::MinutesPlan::showInfo() const
{
	cout << "Plan name: " << name << endl;
	cout << "Price per minute: " << priceOfMinute << endl << endl;
}

double Mobile::MinutesPlan::calcPrice(int seconds) const
{
	return priceOfMinute * (seconds / 60);
}
