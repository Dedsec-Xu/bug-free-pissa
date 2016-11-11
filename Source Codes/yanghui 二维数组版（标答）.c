#include <stdio.h>
int main (void)
    {int a,r,b=1,i=1,j=1,x=1,y=2;
    int yh[500][500];
    printf("How many rows?\n");
    scanf("%d",&a);
    printf("\n");
    r=a;
    while(x<=r)
           {yh[x][1]=1;
           yh[x][x]=1;
           	while(y<x)
           	         {
           	         yh[x][y]=yh[x-1][y-1]+yh[x-1][y];
           	         y++;
           	         }
           	         y=2;
           	         x++;
           }
    while(i<=r)
        {
            while(j<=a)
            {
                printf("        ");
                j++;
            }
            j=1;
            while(b<=i)
            {
                printf("%16d",yh[i][b]);
                b++;
            }
            b=1;
            a--;
            i++;
            printf("\n");
        }
    return 0;
    }
