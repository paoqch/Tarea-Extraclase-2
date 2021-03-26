//
// Created by richmond on 26/3/21.
//

#ifndef TAREA_EXTRACLASE_II_SUBJECT_H
#define TAREA_EXTRACLASE_II_SUBJECT_H
#include "Observer.h"
#include <vector>
#include <functional>


using namespace std;

class Subject {

public:

    void Notify();
    void AddObserver(Observer &o);

private:
    std::vector<std::reference_wrapper<Observer>> observers;

};


#endif //TAREA_EXTRACLASE_II_SUBJECT_H
