#include "funcA.h"
#include <iostream>

void testCalculateCosine() {
    FuncA func;
    double result = func.calculateCosine(0.5, 5);
    if (result != 0) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed!" << std::endl;
    }
}

int main() {
    testCalculateCosine();
    return 0;
}
