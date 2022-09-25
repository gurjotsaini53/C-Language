#include <stdio.h>
int main(){

    // make  a program to input n , and store 1 to n odd number in a file ;
     FILE *fptr ; 
     fptr = fopen("problem4.txt","w");
    int n  ;
    printf("Enter n :");
    scanf("%d",&n);

    for (int i = 1 ; i<=n;i++ )
    {
        if (i%2!=0)
        {
            fprintf(fptr,"%d\n",i);
        }
    }
    fclose(fptr);
    return 0;
}