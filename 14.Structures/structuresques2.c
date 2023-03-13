#include <stdio.h>

int leapyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}
struct month
{
    /* data */
    int day, month, year;
};

int main()
{
    int t;
    scanf("%d", &t);

    /* code */
    struct month mahina[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &mahina[i].day);
        scanf("%d", &mahina[i].month);
        scanf("%d", &mahina[i].year);
    }

    for (int i = 0; i < t; i++)
    {
        //    if (mahina[i].day > 0 && mahina[i].day<28)
        //    {
        //       mahina[i].day++;
        //    }

        if (mahina[i].month == 2)
        {
            if (mahina[i].day == 28 && leapyear(mahina[i].year) == 1)
            {
                mahina[i].day++;
            }

            else
            {
                mahina[i].day = 1;
                mahina[i].month = 3;
            }
        }
        else
        {

            if (mahina[i].day == 31 && mahina[i].month == 12)
            {
                mahina[i].day = 1;
                mahina[i].month = 1;
                mahina[i].year++;
            }
            else if (mahina[i].day == 30 && (mahina[i].month == 3 || mahina[i].month == 5 || mahina[i].month == 6 || mahina[i].month == 9 || mahina[i].month == 11))
            {
                mahina[i].month++;
                mahina[i].day = 1;
            }
            else if (mahina[i].day == 31 && (mahina[i].month == 1 || mahina[i].month == 4 ||  mahina[i].month == 7 || mahina[i].month == 8 || mahina[i].month == 10 ))
            {
                mahina[i].month++;
                mahina[i].day = 1;
            }
            else
            {
                mahina[i].day++;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {

        if (mahina[i].month < 10 )
        { 
            if (mahina[i].day<10){
            printf("0%d-0%d-%d\n", mahina[i].day, mahina[i].month, mahina[i].year);
            }
            else{
            printf("%d-0%d-%d\n", mahina[i].day, mahina[i].month, mahina[i].year);

            }
        }
        else
        {  
            if (mahina[i].day<10){
            printf("0%d-%d-%d\n", mahina[i].day, mahina[i].month, mahina[i].year);
            }
            else{
            printf("0%d-%d-%d\n", mahina[i].day, mahina[i].month, mahina[i].year);

            }
        }
    }
}
