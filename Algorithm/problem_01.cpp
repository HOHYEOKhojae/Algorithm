//
//  problem_01.cpp
//  Algorithm
//
//  Created by 김건혁 on 3/6/24.
//

#include <stdio.h>
void problem_01()
{
    int a = 1;
    int b = 2;
    int c;
    
    c = (++a, ++b, a++);
    
    printf("%d\n", c);
    
}
