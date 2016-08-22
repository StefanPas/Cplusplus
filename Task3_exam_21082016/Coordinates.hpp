//
//  Coordinates.hpp
//  Task3_exam_21082016
//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#ifndef Coordinates_hpp
#define Coordinates_hpp

#include <stdio.h>

class Coordinates
{
private:
    double _latitude;
    double _longitude;
public:
    double getLatitude() {return _latitude;};
    void setLatitude(double newLatitude) {_latitude = newLatitude;};
    double getLongitude() {return _longitude;};
    void setLongitude(double newLongitude) {_longitude = newLongitude;};
};

#endif /* Coordinates_hpp */
