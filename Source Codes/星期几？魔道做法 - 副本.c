#include<stdio.h>
int main()
{
    int i,y,m,d,month[12] = {0,0,31,59,90,120,151,181,212,243,273,304,334},a[2];
    char * s[] = {"Which year?\n","Which month?\n","Which day?\n","Sunday","Monday","Tuesday","Wedsday","Thursday","Friday","Saturday"};
    for(i = 0;i <= 2;i ++){printf("%s",s[i]);scanf("%d",&a[i]);}
    printf("%s",s[(365 * (a[0] - 1) + (a[0] - 1) / 4 - (a[0] - 1) / 100 + (a[0] - 1) / 400 + a[2] + ( (a[0] % 400 == 0 || ( a[0] % 4 == 0 && a[0] % 100 != 0 )) && a[1] >= 3) + month[a[1]]) % 7 + 3]);
    return 0;
}
