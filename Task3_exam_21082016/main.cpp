//
//  main.hpp
//  Task3_exam_21082016
//  Description: Program will allow to input of data for resorts and country. Also, will display search results by three parameters.

//  Status: NOT FINISHED.
//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#include <iostream>
#include <thread>
#include <mutex>
#include "Country.hpp"
#include "RestingPlacesContainer.hpp"

std::mutex mtx;

void executeSearch(std::string countryName, int barsRequired, std::string currency, RestingPlacesContainer aContainer)
{
    aContainer.searchPlaceByThreeCriteria(countryName, barsRequired, currency);
}

int main(int argc, const char * argv[]) {
    
    Country *aResortPlace1 = new Country();
    
    aResortPlace1->RestingPlaces::setName("Zlatni Piasuci");
    aResortPlace1->Coordinates::setLatitude(43.25676);
    aResortPlace1->Coordinates::setLongitude(28.02957);
    aResortPlace1->RestingPlaces::setTerrain(rock);
    aResortPlace1->RestingPlaces::setNumberOfBars(1567);
    aResortPlace1->setName("Bulgaria");
    aResortPlace1->setLocalCurrency("Leva");
    
    Country *aResortPlace2 = new Country();
    
    aResortPlace2->RestingPlaces::setName("Gradina");
    aResortPlace2->Coordinates::setLatitude(42.42286);
    aResortPlace2->Coordinates::setLongitude(27.64494);
    aResortPlace2->RestingPlaces::setTerrain(asphalt);
    aResortPlace2->RestingPlaces::setNumberOfBars(3);
    aResortPlace2->setName("Bulgaria");
    aResortPlace2->setLocalCurrency("Leva");
    
    RestingPlacesContainer aRestingPlacesContainer;
    aRestingPlacesContainer.aContainer.push_back(std::shared_ptr<Country>(aResortPlace1));
    aRestingPlacesContainer.aContainer.push_back(std::shared_ptr<Country>(aResortPlace2));
    
    std::thread aThreadSearch(executeSearch, "Bulgaria", 2, "Leva", aRestingPlacesContainer);

    aThreadSearch.join();
    
    return 0;
}
