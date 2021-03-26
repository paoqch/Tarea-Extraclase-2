//
// Created by richmond on 25/3/21.
//

#include "BuilderPattern.cpp"
#include "Subject.h"
#include "ConcreteObserver.h"


int main() {

    Director dir;
    GamingPCBuilder lb;

    Computer *gamingPC= dir.createComputer(&lb);

    gamingPC->show();
    delete gamingPC;

    Subject s;
    ConcreteObserver coolingSystem,operatingSystem,inputSystem, outputSystem;

    s.AddObserver(coolingSystem);
    s.AddObserver(operatingSystem);
    s.AddObserver(inputSystem);
    s.AddObserver(outputSystem);


    coolingSystem.SetString("Cooling system on");
    operatingSystem.SetString("Operating system on");
    inputSystem.SetString("Input system on");
    outputSystem.SetString("Output system on");

    s.Notify();

    return 0;
}
