#include <stdio.h>
#include <math.h>

void FW(FILE *fp,int a);

int main(int argc,const char*argv[]){

  int i;
  FILE *fileout;
  const char FN[] = "MAL.csv";
  
  fileout = fopen(FN,"w");
  
    if( fileout == NULL){
      printf("ERR:THIS FILE %s CAN'T OPEN!",FN);
      return -1;
    }

    for(i=1;i<=10;i++){
      // fprintf(fileout,"%d \n",i);
      FW(fileout,i);
    }

  fclose(fileout);

  return 0;
}

/*Write to file*/

void FW(FILE *fp,int a){
  fprintf(fp,"%d \n",a);
}