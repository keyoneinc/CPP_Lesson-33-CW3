#include "Plan.h"

Mobile::Plan::Plan()
{
    name = "undefined";
}

Mobile::Plan::Plan(string name)
{
    this->name = name;
}

void Mobile::Plan::setName(string name)
{
    this->name = name;
}

string Mobile::Plan::getName() const
{
    return name;
}
