//
//  RestingPlacesContainer.hpp
//  Task3_exam_21082016
//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#ifndef RestingPlacesContainer_hpp
#define RestingPlacesContainer_hpp

#include <iostream>
#include <vector>
#include "RestingPlaces.hpp"
#include "Country.hpp"

class RestingPlacesContainer
{
public:
    std::vector<std::shared_ptr<Country>> aContainer;
    
    void searchPlaceByThreeCriteria(std::string countryName, int barsRequired, std::string currency);
    
};

#endif /* RestingPlacesContainer_hpp */
