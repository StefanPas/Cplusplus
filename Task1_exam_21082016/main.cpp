//
//  main.cpp
//  Task1_exam_21082016

//  Description: input sting of 255 numbers (>0 and <=255), and the program will return the most repeated number. In case two or more numbers are with equal repetitions, than as a result will be returned the bigger of this three numbers.

//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#include <iostream>
#include <map>
#include "InputString.hpp"
#include "MakeCalculations.hpp"

///Constants: GIVEN_NUMBERS is 255.
///Can be changed from Constants.hpp

int main(int argc, const char * argv[]) {
    
    InputString anInputString;
    anInputString.getInputLine();
    
    std::istringstream anIn;
    anIn = anInputString.inputStringStream();
 
    MakeCalculations aMakeCalculation;
    aMakeCalculation.convertStringLineToInputNumbers(anInputString, anIn);
    aMakeCalculation.calcRepetitionsOfNumbers();
    aMakeCalculation.getBiggestAndMostRepeatedNumber();
    aMakeCalculation.printResult(anInputString.getLine());
    
    return 0;
}
