//
//  main.cpp
//  Algorithm
//
//  Created by 김건혁 on 3/6/24.
//

#include <iostream>
#include "problem01.hpp"
#include "problem02.hpp"
int main(int argc, const char * argv[]) {
    // 24.03.06
    problem01();
    
    // 24.03.07
    struct A st[2];
    for (int i = 0; i < 2; i++)
    {
        st[i].n = i;
        st[i].g = i + 1;
    }
    printf("%d", st[0].n + st[1].g);
}
