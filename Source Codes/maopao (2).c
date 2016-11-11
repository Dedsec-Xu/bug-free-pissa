#include<stdio.h>
int main (void)
 {int i,j,t,n;
   i=1;
   printf("How many numbers are there?\n");
   scanf("%d",&j);
   int n=j;
   int a[50];
   while(i<=n)
            {printf("number %d is ",i);
             scanf("%d",&a[i]);
             i=i+1;
            }
     printf("input complete\n");
     for(j=0;j<n;j++)
          {for(i=0;i<n-j;i++)
                if(a[i]>a[i+1])
                  {t=a[i];
                   a[i]=a[i+1];
                   a[i+1]=t;
                  }
          }
      printf("Sorted numbers: ");
      for(i=1;i<=n;i++)
           printf("%d  ",a[i]);
      return 0;
  }