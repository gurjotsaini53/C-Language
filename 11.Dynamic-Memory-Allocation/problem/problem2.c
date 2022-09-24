#include <stdio.h>
#include <stdlib.h>

int main(){
    // write a program to allocate memory of size n , where n is entered by user
    int  n ; 
    printf("Enter size : ");
    scanf("%d",&n);

    int *ptr = (int *) calloc (n,sizeof(int));
    for (int i = 0 ; i<n;i++){
    printf("%d\n",ptr[i]);
    }
    
}