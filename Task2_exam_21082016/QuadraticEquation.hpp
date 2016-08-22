//
//  QuadraticEquation.hpp
//  Task2_exam_21082016

//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#ifndef QuadraticEquation_hpp
#define QuadraticEquation_hpp

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cmath>

class QuadraticEquation
{
private:
    float _a;
    float _b;
    float _c;
public:
    QuadraticEquation(float newA, float newB, float newC)
    {
        _a = newA;
        _b = newB;
        _c = newC;
    };
    float calcDeterminant()
    {
        return _b*_b - 4*_a*_c;
    }
    void findRootsAndPrint(float aDeterminant);
};

#endif /* QuadraticEquation_hpp */
