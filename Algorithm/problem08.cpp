//
//  problem08.cpp
//  Algorithm
//
//  Created by 김건혁 on 4/3/24.
//

#include "problem08.hpp"

#include <stdio.h>
void problem08() {
  int c=1;
  switch(3){
    case 1:c+=3;
    case 2:c++;
    case 3:c=0;
    case 4:c+=3;
    case 5:c-=10;
    default : c--;
    
  }
printf("%d",c);
  }
