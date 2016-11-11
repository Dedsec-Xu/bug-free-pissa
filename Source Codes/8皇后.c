#include<stdio.h>
#include<math.h>

int main()
{
    int a[8]={1,3,1,4,1,1,1,1,1},i,j,q,c,b,e,s=0,k=0,m=6;

    for(a[1] = 1;a[1] <= m;a[1]++)
    {
        for(a[2] = 1;a[2] <= m;a[2]++)
        {
            for(a[3] = 1;a[3] <= m;a[3]++)
            {
                for(a[4] = 1;a[4] <= m;a[4]++)
                {
                    for(a[5] = 1;a[5] <= m;a[5]++)
                    {
                        for(a[6] = 1;a[6] <= m;a[6]++)
                        {
                            //for(a[7] = 1;a[7] <= 8;a[7]++)
                            //{
                                //for(a[8] = 1;a[8] <= 8;a[8]++)
                                //{
                                    for(i = 1;i < m;i++)
                                    {
                                        for(j = i + 1;j <= m;j++)
                                        {
                                            c = a[j] + 100 - a[i] - j + i;
                                            e = a[i] + 100 - a[j] - j + i;
                                            b = a[j] - a[i];
                                            if((c == 100) || (e == 100) || (b == 0))
                                            {
                                                s = 1;
                                                break;
                                            }
                                        }
                                        if(s == 1)
                                        {
                                            break;
                                        }
                                    }
                                    if (s != 1)
                                    {
                                        k++;
                                        printf("Found one!\n");
                                        for(q = 1;q <= m;q++)
                                        {
                                            printf("%d   ",a[q]);
                                        }
                                        getchar();
                                    }
                                    else
                                    {
                                        printf("NG\n");
                                    }
                                    s = 0;
                                //}
                            //}
                        }
                    }
                }
            }
        }
    }
    printf("%d",k);

    return 0;
}
