#include<stdio.h>
#include<stdlib.h>
void huisu(int l);
int jc(int l,int i);
int  n,h[100];
int  x;
void main()
{	printf("������������������ӭʹ�á������������������\n");
	printf("ʹ��˵�������������û��ݷ�����N�ʺ����⣬��������������������ÿһ�д�����һ����ŷ������������ִ����ŵ����̵�N�е�λ�á�\n");

	printf("�����������������������������������������\n");
    printf("N=");
    scanf("%d",&n);
    x=0;
    huisu(1);
    printf("��ŷ���һ���У�%d��\n",x);
    system("pause");
}

void huisu(int  l)
{
    int i,j;
    if (l==n+1)
    {
       x=x+1;
	   printf("��%d����ŷ������£�\n",x);
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
