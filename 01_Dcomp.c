#include <stdio.h>
#include "01_Dcomp.h"

extern int f(int);

int x=NUMBER;

int main(void)
{
  printf("x = %d\n", x);
  printf("f(x) = %d\n", f(x));
  return 0;
}