#include <stdio.h>
#include <math.h>

// void fpf(int a,int b);
void Dloop(void);
void fpf(int a,int b);

int main(int argc,const char * argv[]){
  Dloop();

  return 0;
}

void Dloop(void){
  int i,j;
  for (i = 0;i<10;i++){
    for (j = 0;j<10;j++){
      fpf(i,j);
    }
  }
}

void fpf(int a,int b){
  printf("Now: i = %d,j = %d \n",a,b);
}