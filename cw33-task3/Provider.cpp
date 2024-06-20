#include "Provider.h"

Mobile::Provider::Provider()
{
    name = "undefined";
}

Mobile::Provider::Provider(string name)
{
    this->name = name;
}

Mobile::Provider::~Provider()
{
    for (auto item : Array) {
        delete item;
    }
}

void Mobile::Provider::setName(string name)
{
    this->name = name;
}

string Mobile::Provider::getName() const
{
    return name;
}

void Mobile::Provider::addPlan(Plan* obj)
{
    Array.push_back(obj);
}

void Mobile::Provider::showList() const
{
    for (auto item : Array) {
        item->showInfo();
    }
}

const Mobile::Plan* Mobile::Provider::operator[](string name)
{
    for (auto item : Array) {
        if (item->getName() == name) {
            return item;
        }
    }
    return nullptr;
}
