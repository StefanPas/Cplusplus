//
//  MakeCalculations.hpp
//  Task1_exam_21082016
//
//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#ifndef MakeCalculations_hpp
#define MakeCalculations_hpp

#include <iostream>
#include <map>
#include <sstream>
#include "InputString.hpp"
#include "Constants.hpp"

class MakeCalculations
{
private:
    unsigned short numbersArray[GIVEN_NUMBERS];
    unsigned short maxValue[2]; //stores result from getBiggestAndMostRepeatedNumber()
    std::map<unsigned short, unsigned short>uniqueNumbers;
public:
    unsigned short *getNumbersArray() { return this->numbersArray; };
    void convertStringLineToInputNumbers(InputString &anInputString, std::istringstream &anIn);
    void calcRepetitionsOfNumbers();
    void getBiggestAndMostRepeatedNumber();
    void printMapKeyAndValue();
    void printResult(std::string aLine);
};

#endif /* MakeCalculations_hpp */
