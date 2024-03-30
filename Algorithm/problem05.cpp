//
//  problem05.cpp
//  Algorithm
//
//  Created by 김건혁 on 3/30/24.
//
// #Using Dynamic Array
#include "problem05.hpp"
#include "iostream"
using namespace std;


void problem05()
{
    int *array = new int[4];
    for (int i = 0; i < sizeof(*array); i++)
    {
        array[i] = i;
        cout << array[i];
    }
    
}
