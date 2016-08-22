//
//  QuadraticEquation.cpp
//  Task2_exam_21082016

//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#include "QuadraticEquation.hpp"

void QuadraticEquation::findRootsAndPrint(float aDeterminant)
{
    float x1, x2;
    if (aDeterminant > 0) {
        x1 = (-_b + sqrt(aDeterminant)) / (2*_a);
        x2 = (-_b - sqrt(aDeterminant)) / (2*_a);
        printf("%.2f.2 %.2f", x1,  x2);
    }
    else if (aDeterminant == 0) {
        x1 = (-_b + sqrt(aDeterminant)) / (2*_a);
        printf("%.2f.2 %.2f", x1,  x1);
    }
    else
    {
        std::cout << "nan,nan";
    }
}
