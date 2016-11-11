#include <stdio.h>
int main (void)
    {int a,r,b=0,i=0,j=1;
   printf("%d",yh(4,2));
    }
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
