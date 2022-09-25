#include <stdio.h>
int main()
{

    // 2 number - a & b are written in a file . Write a program to replace them with their sum ;

    FILE *fptr;
    fptr = fopen("problem5.txt", "r");
    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    fptr = fopen("problem5.txt", "w");

    fprintf(fptr, "%d", a + b);
    fclose(fptr);

    return 0;
}