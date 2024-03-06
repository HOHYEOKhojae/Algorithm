//
//  problem01.cpp
//  Algorithm
//
//  Created by 김건혁 on 3/6/24.
//

#include "problem01.hpp"

void problem01()
{
    int a = 1;
    int b = 2;
    int c;
    
    c = (static_cast<void>(++a), static_cast<void>(++b), a++);
    
    printf("%d\n", c);
    
}
