#include <iostream>
#include "Provider.h"

int main() {
    Mobile::Provider Vodafone("Vodafone");
    Vodafone.addPlan(new Mobile::SecondsPlan("Student", 0.01));
    Vodafone.addPlan(new Mobile::MinutesPlan("Red Mini", 0.5));
    Vodafone.addPlan(new Mobile::SecondsPlan("Red Maxi", 0.05));
    Vodafone.addPlan(new Mobile::MinutesPlan("Red Top", 0.3));

    Vodafone.showList();

}
