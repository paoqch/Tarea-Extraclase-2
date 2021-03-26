//
// Created by richmond on 26/3/21.
//
using namespace std;

#include "ConcreteObserver.h"

/**
 * Show message
 */
void ConcreteObserver::Notify() {
    cout << this->message << endl;
}
/**
 * set message
 * @param msg string
 */
void ConcreteObserver::SetString(string msg) {
    this->message = msg;
}