//
//  main.cpp
//  Task2_exam_21082016

//  Description: Calculates the quadratic equation. On run, the program will require input of three parameters separated by space (example: 10 2 23).

//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#include <iostream>
#include "QuadraticEquation.hpp"

int main(int argc, const char * argv[]) {
    
    float a, b, c;
    std::cin >> a >> b >> c;
    QuadraticEquation anObject = QuadraticEquation(a, b, c);
    anObject.findRootsAndPrint(anObject.calcDeterminant());

    return 0;
}
