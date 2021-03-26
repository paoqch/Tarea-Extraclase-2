//
// Created by richmond on 26/3/21.
//

#include "Subject.h"
#include <iostream>


using namespace std;


/**
 * Add observer
 * @param o
 */

void Subject::AddObserver(Observer& o) {
    observers.push_back(o);
}

/**
 * Notify observer
 */
void Subject::Notify() {
    for(Observer& o: observers){
        o.Notify();
    }
}


