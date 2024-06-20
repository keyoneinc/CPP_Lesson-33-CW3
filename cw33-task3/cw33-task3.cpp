#include <iostream>
#include "Provider.h"
#include "Consumer.h"

int main() {
    Mobile::Provider Vodafone("Vodafone");
    Vodafone.addPlan(new Mobile::SecondsPlan("Student", 0.01));
    Vodafone.addPlan(new Mobile::MinutesPlan("Red Mini", 0.5));
    Vodafone.addPlan(new Mobile::SecondsPlan("Red Maxi", 0.05));
    Vodafone.addPlan(new Mobile::MinutesPlan("Red Top", 0.3));
    try {
        Vodafone.addPlan(new Mobile::SecondsPlan("Test", -1));
    }
    catch (const exception* obj) {
        cout << obj->what() << endl;
    }

    Vodafone.showList();

    cout << "---------------------------------" << endl;

    const Mobile::Plan* obj = Vodafone["Student"];
    if (obj != nullptr) {
        obj->showInfo();
        cout << "Price for 70 seconds: " << obj->calcPrice(70) << endl;
        try {
            cout << "Price for -70 seconds: " << obj->calcPrice(-70) << endl;
        }
        catch (const exception* em) {
            cout << em->what() << endl;
        }
    }

    Mobile::Consumer Alexey("Alexey", "+1234", 200, Vodafone["Red Maxi"]);



}
