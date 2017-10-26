#include <stdio.h>

/* 関数 f(x) */
double f(double x) {
  return x*x-2.0;
}

/* 二分法 x1<x2 誤差限界 eps*/
double off(double x1, double x2, double eps){
  double x;
  while(x2-x1>=eps){
    x = (x1+x2)/2.0;
    if (f(x1)*f(x) > 0.0) {
      x1 = x;
    }
    else{
      x2 = x;
    }
  }
  return (x1+x2)/2.0;
}

int main(void) {
  double eps=0.00001;
  printf("%lf %lf\n",off(-2,0,eps), off(0,2,eps));

  return 0;
}