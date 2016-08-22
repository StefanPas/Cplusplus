//
//  Country.hpp
//  Task3_exam_21082016
//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#ifndef Country_hpp
#define Country_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

#include "RestingPlaces.hpp"
#include "Coordinates.hpp"

class Country: public RestingPlaces, public Coordinates
{
private:
    std::string _name;
//    std::vector<std::string>_beaches;
    std::string _localCurrency;
//    double _localCurrToEuroExchangeRate;
public:
    RestingPlaces aRestingPlaces;
    Coordinates aCoordinates;
    
    std::string getName() {return _name;};
    void setName(std::string newName) {_name = newName;}
    
    std::string getLocalCurrency() {return _localCurrency;};
    void setLocalCurrency(std::string newLocalCcy) {_localCurrency = newLocalCcy;};
    
    
    
    
};

#endif /* Country_hpp */
