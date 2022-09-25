#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d", &n);
     for (int i = 1 ,j=n ; i<=n ,j>=1 ; i++,j--)
     {
        sum+=i;
        printf("%d ",j);
     }
        printf("\n%d\n ",sum);

    return 0;
}