//
//  RestingPlaces.hpp
//  Task3_exam_21082016
//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#ifndef RestingPlaces_hpp
#define RestingPlaces_hpp

#include <iostream>

enum Terrain
{
    sand = 0,
    rock,
    tiles,
    asphalt,
    combined,
    other
};

class RestingPlaces
{
private:
    std::string _name;
    double _latitude;
    //double _longitude;
    int _numberOfBars;
    Terrain aTerrain;
public:
    std::string getName() {return _name;};
    void setName(std::string newName) {_name = newName;}
    
    double getLatitude() {return _latitude;};
    void setLatitude(double newLatitude) {_latitude = newLatitude;};
    
    double getNumberOfBars() {return _numberOfBars;};
    void setNumberOfBars(int newNumberOfBars) {_numberOfBars = newNumberOfBars;};
    
    void setTerrain(Terrain newTerrain) {aTerrain = newTerrain;};
    Terrain getTerrain() {return aTerrain;};
    
    std::string getNameOfTerrain(int number)
    {
        switch(number)
        {
            case 0:
                return "road";
            case 1:
                return "sand";
            default:
                return "other";
        }
    }
    
    
};


#endif /* RestingPlaces_hpp */
