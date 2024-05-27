#ifndef GENERIC_H
#define GENERIC_H

#include "Caminist.h"
#include "Camera.h"
#include <iostream>

template<typename T>
class Generic {
private:
    T element1;
    T element2;

public:
    explicit Generic(const T& element1_, const T& element2_)
            : element1(element1_), element2(element2_) {}

    T getElement1() const {
        return element1;
    }

    T getElement2() const {
        return element2;
    }

    void performComplexOperation() const {
        std::cout << "OPERATIE COMPLEXA:" << std::endl;
        double result = (element1.getMedie() + element2.getMedie()) / 2.0;
        std::cout <<result << std::endl;
    }

    template<typename U>
    void performCustomOperation(U operation) const {
        std::cout << "OPERATIE CUSTOMIZABILA" << std::endl;
        operation(element1, element2);
    }
};

#endif // GENERIC_H
