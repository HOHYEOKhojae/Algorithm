//
//  problem07.cpp
//  Algorithm
//
//  Created by 김건혁 on 3/31/24.
//

#include "problem07.hpp"
void problem07()
{
    int r = 0;
    for (int i = 0; i < 999; i++) {
        if (i % 3 == 0 && i % 2 == 0) {
            r = i;
        }
    }
    printf("%d",r);
}
