#include<stdio.h>
#include<stdlib.h>
void huisu(int l);
int jc(int l,int i);
int  n,h[100];
int  x;
void main()
{	printf("☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆欢迎使用☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
	printf("使用说明：本程序利用回溯法计算N皇后问题，计算后会输入若干行数，每一行代表着一种码放方法，行中数字代表着第棋盘第N行的位置。\n");

	printf("☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
    printf("N=");
    scanf("%d",&n);
    x=0;
    huisu(1);
    printf("码放方法一共有：%d种\n",x);
    system("pause");
}

void huisu(int  l)
{
    int i,j;
    if (l==n+1)
    {
       x=x+1;
	   printf("第%d种码放方法如下：\n",x);
       for(i=1;i<=n;i++)
          printf("%-3d",h[i]);
       printf("\n");
    }
    for (i=1;i<=n;i++)
    {
        h[l]=i;
        if (jc(l,i)!=1)
			huisu(l+1);
    }
}

int jc(int l,int i)
{
     int k;
     for (k=1;k<l;k++)
       if (abs(l-k)==abs(h[k]-i)||i==h[k])
		   return 1;
     return 0;
}
