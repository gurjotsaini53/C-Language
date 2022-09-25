#include <stdio.h>
int main(){

 // make  a program to read 5 integer from a file

  FILE *fptr ; 
  fptr = fopen("problem1.txt","r");
  int n ;
  fscanf(fptr,"%d",&n);
  printf("Integer = %d\n",n);
  fscanf(fptr,"%d",&n);
  printf("Integer = %d\n",n);
  fscanf(fptr,"%d",&n);
  printf("Integer = %d\n",n);
  fscanf(fptr,"%d",&n);
  printf("Integer = %d\n",n);
  
  fscanf(fptr,"%d",&n);
  printf("Integer = %d\n",n);
  


  fclose(fptr);

}