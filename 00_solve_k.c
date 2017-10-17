#include <stdio.h>
#include <math.h>

int main (int argc,const char*argv[]){
  double eps = 0.00000001;
  double u_0,u_1,l,e;  
  long LC = 0;
  const double pi = 4.*atan(1.); 
  const double a = pi/180.;
  int i;

  printf("please write the score:eps)%lf \nwrite l,e;",eps);
  scanf("%lf %lf",&l,&e);
  l *= a;
  u_0 = l;

  printf("choose way to culcuration:\n1 -> A first-order approximation\n2 -> Newton_way\n");
  scanf("%d",&i);


  do {

    if(LC != 0){
      u_0 = u_1;
    }

    switch (i) {

    // solved at first-order approximation

    case 1:
    u_1 = l + e * sin (u_0);
    break ;

    // End 1

    // solved at Newton_way

    case 2:
    u_1 = u_0 -(u_0 - e*sin (u_0) - l)/(1 - e*cos(u_0));
    break ;

    // End 2

    default:
      printf("Invalid decision has been specified for an operator");
      return -1;
    break;

  }
    
    LC += 1;
    printf("%lf \n",u_1/a);

  } while(fabs(u_1 - u_0) >= eps);



  printf("Kapler solve is %lf, Loop %d times.",u_1/a,LC);

  return 0;
}