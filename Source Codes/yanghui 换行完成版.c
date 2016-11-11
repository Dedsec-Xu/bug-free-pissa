#include <stdio.h>
int yh(int x,int y)
    {
        int z,m,n,i=1,k=1,l=1;
        m=x;
        n=y;
        while(i<=y)
        {
            k=k*m;
            m--;
            i++;
        }
        while(n>0)
        {
            l=l*n;
            n--;
        }
        z=k/l;
        return z;
    }
int main (void)
    {int a,r,b=0,i=0,j=1,m,u,o=1;
    scanf("%d",&a);
    r=a;
    while(i<a)
        {
            m=1;
           while(m<r)
                {
                    printf("   ");
                    m=m+1;
                }
            while(b<=i)
            {
                printf("%6d",yh(i,b));
                b++;
            }
            b=0;
            i++;
            printf("\n");
            r--;
        }
    return 0;
    }
