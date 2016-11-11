#include <stdio.h>
int main (void)
    {int r,ro,i,j,a[500]={1},b[500]={1};
    scanf("%d",r);
    ro=r;
    for(i=1;i<=r;i++)
         {for(j=1;j<ro;j++)
               printf("  ");
          a[1]=1;
          a[i]=1;
          for(j=1;j<i;j++)
               b[j]=a[j];
          for(j=2;j<i+1;j++)
               a[j]=b[j]+b[j-1];
          for(j=1;j<=i;j++)
               printf("%4d",a[j]);
          printf("\n");
          ro=ro-1;
         }
    return 0;
    }
