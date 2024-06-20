#include "SecondsPlan.h"

Mobile::SecondsPlan::SecondsPlan()
{
    priceOfSecond = 0;
}

Mobile::SecondsPlan::SecondsPlan(string name, float priceOfSecond) : Plan(name)
{
    if (priceOfSecond < 0) {
        throw new PriceException();
    }
    this->priceOfSecond = priceOfSecond;
}

void Mobile::SecondsPlan::setPriceOfSecond(float priceOfSecond)
{
    this->priceOfSecond = priceOfSecond;
}

float Mobile::SecondsPlan::getPriceOfSecond() const
{
    return priceOfSecond;
}

void Mobile::SecondsPlan::showInfo() const
{
    cout << "Plan name: " << name << endl;
    cout << "Price per second: " << priceOfSecond << endl << endl;
}

double Mobile::SecondsPlan::calcPrice(int seconds) const
{
    if (seconds < 0) {
        throw new SecondsException();
    }
    return (seconds * priceOfSecond);
}
