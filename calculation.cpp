//
//  calculation.cpp IMPLEMENTATION FILE
//  _calculation
//
// Implement the abstract data type Floats
//
//  Created by Jae Won Hyun on 7/25/16 CS 231 (due 080216)
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

//  edit history:
//  072516 set default constructor
//  072816 add method to fill the array
//  072516 add parameters to discourage the input of negative numbers to the fillArray method
//  072516 add method to get the contents of the array by iterating through the array
//  072616 add method to calculate the average of the contents in the array
//  072616 initiate variable for the total sum of the contents
//  072616 add method to get the average
//  072716 add method to calculate the std deviation of the contents in the array
//  072716 initiate variable for the difference in each number and the average
//  072716 initiate variable for the "to the power of 2" for each numAveDiff and add all together
//  072716 add method to get the std deviation
//  072816 add stdexcept library
//  073016 guard against negative values for the input of negative values



#include <stdio.h>
#include "calculation.h"
#include <iostream>
#include <cmath>
#include <stdexcept>

// default constructor
Floats::Floats()
{
    
}

// filling in the array
void Floats::fillArray()
{
    // ask the user for the number of floating point numbers and store
    std::cout << "\nHow many floating point numbers will you enter? ";
    std::cin>> count;
    
    while(count <= 0)
    {
        std::cout << "\nIt needs to be a value greater than 0. Please enter again. \n ";
        std::cin>> count;
    }
    
    // if the number is bigger than 0
    if(count > 0)
    {
        float n;
        

        
        // store the numbers into the array
        for (size_t i = 0; i < count; i++)
        {
            std::cout << "\nPlease enter numbers that are same or bigger than 1: \n";
            std::cin>> n;
            
            while(n <= 0)
            {
                std::cout << "\nPlease enter a positive value. Try again: \n";
                std::cin>> n;
            }
            
            numbers[i] = n;
        }
        
    }
    else
        // if the number is smaller than 0, throw error
        throw std::invalid_argument("\nSorry, you must enter in a postiive value. \n");
    
}

// get the contents of the array
void Floats::getContent() const
{
    std::cout << "\n The numbers are: \n";
    
    //output each number
    for (size_t i = 0; i < count; ++i)
    {
        std::cout<<numbers[i]<<std::endl;
    }
}

// set the average of the contents in the array
void Floats::setAverage()
{
    // initiate variable
    float totalSumAve = 0.00;
    
    // calculate average
    for (size_t i =0; i< count; i++)
        totalSumAve += numbers[i];
    average = totalSumAve / count;
}

// get the average
float Floats::getAverage() const
{
    return average;
}

// set the standard deviation of the contents in the array
void Floats::setStddeviation()
{
    // initiate variables
    float numAveDiff = 0.00;
    float powerNum = 0.00;
    
    // calculate std deviation
    for (size_t i = 0; i < count; i++)
    {
        numAveDiff = numbers[i] - average;
        powerNum += pow(numAveDiff, 2.00);
    }
    
    powerNum = (1/((float)count - 1)) * powerNum;
    stddeviation = sqrt(powerNum);
}

// get the standard deviation
float Floats::getStddeviation() const
{
    return stddeviation;
}



