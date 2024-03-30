//
//  problem03.cpp
//  Algorithm
//
//  Created by 김건혁 on 3/11/24.
//

#include "problem03.hpp"
void pbImplement()
{
    problem03 pb03;
    pb03.a[0] = 0;
    pb03.a[1] = 2;
    pb03.a[2] = 4;
    pb03.a[3] = 8;
    pb03.sum = 0;
    
    for (int i = 1; i < 4; i++)
    {
        pb03.p = pb03.a + i;
        pb03.b[i - 1] = *pb03.p - pb03.a[i - 1];
        pb03.sum = pb03.sum + pb03.b[i - 1] + pb03.a[i];
    }
    
    printf("%d", pb03.sum);
}

