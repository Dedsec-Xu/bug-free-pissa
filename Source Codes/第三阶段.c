#include <stdio.h>
#include <stdlib.h>
#define M 2             //m是科目个数
#define N 2             //n是学生个数

float stdavr ( int * p1, int i);
float sbjavr ( int * p2, int i);
int failednum ( int ** p2, int i );
void fuck ( char * p1, int ** p2, int i );

int main( void )
{
    int i, j, n;
    float m;
    char s[M + 1][100];            //s用于存放学科名字
    int grade[N + 1][M + 1];

    for(i = 1;i <= M;i++)
    {
        printf( "Project No.%d 's name is ", i);
        scanf( "%s",&s[i] );
        printf( "\n" );
    }

    for(i = 1;i <= N;i++)
    {
        printf( "Input grades for student No.%d\n\n", i);
        for(j = 1;j <= M;j++)
        {
            printf("His %s grade is: ", s[j]);
            scanf("%d", &grade[i][j]);                     //grade[学生编号][科目编号]
            printf("\n");
        }
    }


    for(i = 1;i <= N;i++)                                       //每个学生的平均成绩
    {
        m = stdavr( grade,i );
        printf( "Student No.%d 's average grade is %.1f\n\n",i ,m );
    }


    for(i = 1; i <= M; i++)                                         //每个科目的平均成绩
    {
        m = sbjavr( grade,i );
        printf( "Subject %s 's average grade is %.1f\n",s[i], m );
    }

    for( i = 1; i <= M; i++ )                                       //低于平均成绩的人数
    {
        n = failednum( grade, i );
        printf( "The number of student who sccored lower than average in subject %s 's %d", s[i], n );
    }

    for( i = 1; i <= M; i++ )                                        //高于90和低于60的人数
    {
        fuck( s, grade, i );
    }

}

float stdavr ( int*p1, int i )
{
    float m = 0;
    int j;
    for( j = 1; j <= M; j++ )
        m += (*( p1 + i ) + j);
    m = (float)(m/M);
    return m;
}


float sbjavr( int*p2, int i )
{
    float m = 0;
    int j;
    for( j = 1; j <=N ; j++ )
    {
        m += (*(p2+j) + i);
        m = (float)m/N;
    }
    return m;
}

int failednum(int**p2,int i)
{
    float m;
    /*float m=0;
    int j;
    for(j=1;j<=N;j++)
    {
        m+=(*(p2+j)+i);
        m=(float)m/N;
    } */                                  //借用学科平均值函数


    int n=1,failednum=0;
    for(n=1;n<=N;m++)
    {
        if(*(*(p2+n)+i)<=sbjavr(*(*(p2+n)+i),i))
            failednum++;
    }
    return failednum;
}

void fuck(char*p1,int**p2,int i)
{
    int m=1, n=1, f=0, h=0;
    for (m=1;m<=i;m++)
    {
        for(n=1;n<=N;n++)
        {
            if(*(*(p2+n)+m)<60)
                f++;
            if(*(*(p2+n)+m)>90)
                h++;
        }
        printf("As for subject %s, %d students scored higher than 90, %d students sccored lower than 60",p1+m,h,f);
        f=0;h=0;
    }
}

