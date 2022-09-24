#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 5;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    // reallocating
    ptr = realloc(ptr, 6);
    printf("printing after reallocation :\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}