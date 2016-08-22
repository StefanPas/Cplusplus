//
//  RestingPlacesContainer.cpp
//  Task3_exam_21082016
//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#include "RestingPlacesContainer.hpp"

void RestingPlacesContainer::searchPlaceByThreeCriteria(std::string countryName, int barsRequired, std::string currency)
{
    
    bool isAvailable = false;
    int resultsCounter = 0;
    std::for_each(aContainer.begin(), aContainer.end(), [&](std::shared_ptr<Country>aCountry)
                  {
                      if(aCountry.get()->getName() == countryName &&
                         aCountry.get()->RestingPlaces::getNumberOfBars() > barsRequired &&
                         aCountry.get()->getLocalCurrency() == currency)
                      {
                          if(isAvailable == false) std::cout << "Founded results:\n\n";
                          std::cout << "Num: " << ++resultsCounter << "\n";
                          std::cout << aCountry.get()->getName()<< "\n";
                          std::cout << aCountry.get()->RestingPlaces::getName()<< "\n";
                          std::cout << aCountry.get()->RestingPlaces::getNumberOfBars()<< "\n";
                          std::cout << aCountry.get()->Coordinates::getLatitude()<< "\n";
                          std::cout << aCountry.get()->Coordinates::getLongitude()<< "\n";
                          //int test = aCountry.get()->RestingPlaces::getTerrain();
                          std::cout << "Terrain: "<< aCountry.get()->RestingPlaces::getNameOfTerrain(aCountry.get()->RestingPlaces::getTerrain()) << "\n";
                          std::cout << aCountry.get()->getLocalCurrency() << "\n\n";
                          isAvailable = true;
                          return;
                      }
                      
                  });
    if(isAvailable == true) return;
    std::cout << "Cannot find resorts by these criteria!\n";
}