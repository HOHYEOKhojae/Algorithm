//
//  problem04.cpp
//  Algorithm
//
//  Created by 김건혁 on 3/19/24.
//

#include "problem04.hpp"

void problem04()
{
    int s;
    int el = 0;
    for (int i = 6; i <= 30; i++)
    {
        s = 0;
        for (int j = 1; j <= i / 2; j++)
        
            if (i % j == 0)
                s = s + j;
        if (s == i)
            el++;
        
    }
    printf("%d", el);
}
