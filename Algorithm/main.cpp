//
//  main.cpp
//  Algorithm
//
//  Created by 김건혁 on 3/6/24.
//

#include <iostream>
using namespace std;

#include "problem01.hpp"
#include "problem02.hpp"
#include "problem03.hpp"
#include "problem04.hpp"
#include "problem05.hpp"
#include "problem06.hpp"
#include "problem07.hpp"
#include "problem08.hpp"




int main(int argc, const char * argv[]) {
    // 24.03.06
    printf("=====Problem 01======\n");
    problem01();
    
    // 24.03.07
    printf("=====Problem 02======\n");
    struct A st[2];
    for (int i = 0; i < 2; i++)
    {
        st[i].n = i;
        st[i].g = i + 1;
    }
    printf("%d\n", st[0].n + st[1].g);
    
    // 24.03.11
    printf("=====Problem 03======\n");
    pbImplement();
    cout << endl;
    
    // 24.03.29
    printf("=====Problem 04======\n");
    problem04();
    cout << endl;
    
    // 24.03.30
    printf("=====Problem 05======\n");
    problem05();
    cout << endl;
    
    // 24.03.30
//    printf("=====Problem 06======\n");
//    pointFunc();
//    cout << endl;
    
    // 24.03.31
    printf("=====Problem 07======\n");
    problem07();
    cout << endl;
    
    // 03.10.25
    printf("=====Problem 08======\n");
    problem08();
    cout << endl;
}
