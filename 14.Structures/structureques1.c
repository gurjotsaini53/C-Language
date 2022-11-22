
#include <stdio.h>

struct item
{
    /* data */
    char  item_name[20] ; 
    int price1, price2,quantity;
};

int main(){
 int t;
 scanf("%d",&t);
 int total_items;
 scanf("%d",&total_items);
 while(t--)
 {
    struct item samaan[total_items];
    for (int i = 0 ;  i < total_items ;i++)
    {
    scanf("%s",&samaan[i].item_name);
    scanf("%d",&samaan[i].quantity);
    scanf("%d",&samaan[i].price1);
    scanf("%d",&samaan[i].price2);
    }
    int sum =0;
    for (int i = 0 ; i < total_items ; i++)
    {
        if (samaan[i].price1>samaan[i].price2)
        {
            sum+=samaan[i].price2 * samaan[i].quantity;
        }
        else{
            sum+=samaan[i].price1 * samaan[i].quantity;
        }
    }

    printf("%d",sum);
 }
return 0 ; 
}