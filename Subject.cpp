//
// Created by richmond on 26/3/21.
//

#include "Subject.h"
#include <iostream>


using namespace std;


void Subject::AddObserver(Observer& o) {
    observers.push_back(o);
}

void Subject::Notify() {
    for(Observer& o: observers){
        o.Notify();
    }
}


