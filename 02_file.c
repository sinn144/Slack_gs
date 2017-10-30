#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int main(void){

  FILE *fp[6];
  char fn[20];
  int i;
  for(i=0;i<6;i++){
    sprintf(fn,"r%d.txt",i);
    fp[i]=fopen(fn,"w");
    if(fp[i]==NULL){
      printf("Cannot open %s \n",fn);
      return 0;
    }

    fputc(0x41, fp[i]);
    fputc(0x42, fp[i]);
    fputc(0x43, fp[i]);
    fputc(0x44, fp[i]);
    fputc(0x45, fp[i]);
    fputc(0xa, fp[i]);

    fclose(fp[i]);

}

}