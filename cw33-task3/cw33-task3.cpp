#include <iostream>
#include "Provider.h"

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

    

}
