#include <stdio.h>
int main()
{
    char ch ; 
    printf("Enter a Alphabet : ");
    scanf("%d",&ch);
    if (ch>='A' && ch<='Z' )
    {
        printf("Uppercase");
    }
    else if (ch>='a' && ch <='z')
    {
        printf("Lowercase");
    }
    else{
        printf("Not a Alphabet");
        

    }
    return 0 ; 
}