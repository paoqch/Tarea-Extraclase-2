//
// Created by richmond on 26/3/21.
//
using namespace std;

#include "ConcreteObserver.h"
void ConcreteObserver::Notify() {
    cout << this->message << endl;
}
void ConcreteObserver::SetString(string msg) {
    this->message = msg;
}