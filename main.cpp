//
//  main.cpp
//  _calculation
//
// Input values and put the code into action
//
//  Created by Jae Won Hyun on 7/25/16 for CS 231 (due 072616)
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

//  edit history:
//  072716 add libraries
//  072716 Initiate an array of size 100 called FloatSets
//  072716 prompt the user to fill in the array with floatSets.fillArray
//  072716 calculate the average of the contents of the array
//  072716 calculate the std devaition of the contents of the array
//  072716 print out the average of the contents in the array
//  072716 print out the standard deviation of the contents in the array
//  072816 add fixed and set precision to 4 decimal places for a clean look for average
//  072816 add fixed and set precision to 4 decimal places for a clean look for standard deviation
//  072816 reiterate back to the user the contents of the array


#include "calculation.h"
#include <cmath>
#include <iomanip>
#include <array>
#include <iostream>


int main()
{
    
    // Declare array of class Floats called floatSets
    Floats floatSets;
    
    // fill in the array with user input
    floatSets.fillArray();
    
    // calculate the average of the user input
    floatSets.setAverage();
    
    // calculate the standard deviation of the user input
    floatSets.setStddeviation();
    
    // print out the contents of the array
    floatSets.getContent();
    
    // print out the average
    std::cout << "\nthe average of the set of numbers is: " <<std::fixed<< std::setprecision(4)<< floatSets.getAverage() << std::endl;
    
    // print out the standard deviation
    std::cout<< "\nthe standard deviation of the set is: "<< std::fixed<< std::setprecision(4)<<floatSets.getStddeviation() << std::endl;

}
