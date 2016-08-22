//
//  InputString.hpp
//  Task1_exam_21082016
//
//  Created by Stefan Paskalev on 2016-08-22.
//  Copyright © 2016 Stefan Paskalev. All rights reserved.
//

#ifndef InputString_hpp
#define InputString_hpp

#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include "Constants.hpp"

class InputString
{
private:
    std::string _line;
public:
    int n;
    
    std::string getLine() {return _line;};
    void getInputLine()
    {
        std::getline(std::cin, _line);
    }
    std::istringstream inputStringStream()
    {
        std::istringstream in(_line, std::istringstream::in);
        return in;
    }
};

#endif /* InputString_hpp */
