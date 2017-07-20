//
//  calculation.h
//  _calculation
//
//  Declare the abstract data type Floats
//
//  Created by Jae Won Hyun on 7/25/16 for CS 231 (due 072616)
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

//  edit history:
//  072616 set array size
//  072616 add private: declare array
//  072616 add public: default constructor
//  072616 add public: method to get the contents of the array
//  072616 add public: method to calculate the average of the array
//  072616 add public: method to get the average
//  072616 add public: method to calculate the std deviations
//  072616 add public: method to get std deviation
//  072616 add private: set private count variable
//  072616 add private: set private average variable
//  072616 add private: set std deviation variable

#ifndef calculationsarray_h
#define calculationsarray_h

#include <stdio.h>
#include <array>

class Floats
{
public:
    static const size_t theArray = 100; // set array size
    
    // constructor initializing array for the floats
    Floats();
    
    void fillArray(); // fill the array
    void getContent() const; // get the content of the array
    void setAverage(); // set average of input
    float getAverage() const; // get average
    void setStddeviation(); // set std deviation of input
    float getStddeviation() const; // get std deviation
    
private:
    int count; // the # of inputs the user gives
    float average; // average
    float stddeviation; // std deviation
    std::array<float, theArray> numbers; // array
    

};

#endif /* calculationsarray_h */

