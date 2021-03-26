//
// Created by richmond on 26/3/21.
//

#ifndef TAREA_EXTRACLASE_II_CONCRETEOBSERVER_H
#define TAREA_EXTRACLASE_II_CONCRETEOBSERVER_H
#include "Observer.h"
#include <iostream>

using namespace std;

class ConcreteObserver : public Observer{
public:
    string message;
    virtual void Notify() override;
    void SetString(string msg);
};


#endif //TAREA_EXTRACLASE_II_CONCRETEOBSERVER_H
