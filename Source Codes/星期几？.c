#include<stdio.h>

int main()
{
    int year,month,day,number,i;
    char * s[] = {"Sunday","Monday","Tuesday","Wedsday","Thursday","Friday","Saturday"};

    printf("Which year?\n");
    scanf("%d",&year);
    printf("Which month?\n");
    scanf("%d",&month);
    printf("Which day?\n");
    scanf("%d",&day);

    number = daylize(year,month,day) - 1;
    number += weekifythefirstday(year);
    number %= 7;
    for(i = 0;i <= 6;i ++)
    {
        if(i == number)
        {
            printf("%s",s[i]);
        }
    }

    return 0;
}

int daylize(int y,int m,int d)
{
    int month[] = {31,28,31,30,31,30,31,31,30,31,30},i;

    if( y % 400 == 0 || ( y % 4 == 0 && y % 100 != 0 ))
    {
        month[1] = 29;
    }
    for(i = 0;i < m - 1;i ++)
    {
        d += month[i];
    }

    return d;
}

int weekifythefirstday(int y)
{
    int i,d = 1;

    for (i = 1;i < y;i ++)
    {
        if( i % 400 == 0 || ( i % 4 == 0 && i % 100 != 0 ))
        {
            d += 2;
        }
        else
        {
            d += 1;
        }
        d %= 7;
    }

    return d;
}
