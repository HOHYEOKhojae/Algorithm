#include <stdio.h>

void func1()
{
  int a = 3;
  int b = 4;
}

void func1()

int main()
{
  int a = 1;
  int b = 2;
  func1();

  // a,b 의 값은 어떻게 되는가?

  printf("a의 값은: %d\n", a);
  printf("b의 값은: %d\n", b);
}
