#include<stdio.h>
int main()
{
    int y,m,d,n,leap,i,month[12] = {0,0,31,59,90,120,151,181,212,243,273,304,334},a[2],sum[7]={0,0,0,0,0,0,0};

    printf("Give me n: ");
    scanf("%d",&n);

    for(y = 1900; y <= 1900 + 900 - 1; y ++)
    {
        for(m = 1; m <= 12; m++)
        {
            leap = ( (y% 400 == 0 || (y % 4 == 0 && y% 100 != 0 )) && m >= 3) ? 1 : 0;
            d = 13 + leap + (y - 1) + (y - 1)  /  4 - (y - 1) / 100 + (y - 1) / 400 + month[m];
            d = d % 7;
            sum[d] ++;
        }
    }

    printf(" Mon. %d\n Tue. %d\n Wed. %d\n Thur.%d\n Fri. %d\n Sat. %d\n Sun. %d", sum[1], sum[2], sum[3], sum[4], sum[5], sum[6], sum[0]);

    return 0;
}
