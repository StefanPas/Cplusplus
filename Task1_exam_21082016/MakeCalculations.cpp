//
//  MakeCalculations.cpp
//  Task1_exam_21082016
//
//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#include "MakeCalculations.hpp"

void MakeCalculations::convertStringLineToInputNumbers(InputString &anInputString, std::istringstream &anIn)
{
    unsigned short ix = 0;
    //insert line string as numbers and make map value equal 0
    while (anIn >> anInputString.n) {
        if(ix < GIVEN_NUMBERS)
        {
            numbersArray[ix++] = anInputString.n;
        }
        else
        {
            std::cout << "Wrong input of numbers! Maximum allowed is: " << GIVEN_NUMBERS << "\n";
            exit(15);
        }
        uniqueNumbers[anInputString.n] = 0;
    }
}

void MakeCalculations::calcRepetitionsOfNumbers()
{
    std::map<unsigned short, unsigned short>::iterator it = uniqueNumbers.begin();
    for(;it != uniqueNumbers.end(); ++it)
    {
        for(unsigned short i = 0; i < GIVEN_NUMBERS; ++i)
        {
            if(it->first == numbersArray[i])
                it->second += 1;
        }
    }
}

void MakeCalculations::getBiggestAndMostRepeatedNumber()
{
    std::map<unsigned short, unsigned short>::iterator it = uniqueNumbers.begin();
    maxValue[0] = it->first;
    maxValue[1] = it->second;
    
    ++it;
    for(;it != uniqueNumbers.end(); ++it)
    {
        if(maxValue[1] <= it->second)  //takes biggest number with most reruns
        {
            maxValue[0] = it->first;
            maxValue[1] = it->second;
        }
    }
}

void MakeCalculations::printMapKeyAndValue()
{
    for(std::map<unsigned short, unsigned short>::iterator it = uniqueNumbers.begin();it != uniqueNumbers.end(); ++it)
    {
        std::cout << it->first << ", " << it->second << "\n";
    }
}

void MakeCalculations::printResult(std::string aLine)
{
    std::cout <<  aLine << " = " << maxValue[0];
}