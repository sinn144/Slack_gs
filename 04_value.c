#include <stdio.h>
void ALgo(double *a,int b){
  double pi = 3.14;

  *a = pi*b ;
}

int main (void){
  int i;
  double alpha = 0.;
  // add (In order to explicitly "alpha")
  printf("alpha is %lf",alpha);

  for (i=0;i<4;i++){
    ALgo(&alpha,i);
    printf("pi*%d = %lf \n",i,alpha);
  }

  return 0;
}