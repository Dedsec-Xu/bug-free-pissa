#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define V 2
#define P 1

void printer(void);
void linemoveleft(int line);
void linemoveright(int line);
void linemoveup(int line);
void linemovedown(int line);
int random(int upper,int twist);
void place(void);
void fplace(void);


int cube[M + 1][M + 1]={1};


void main()
{
    int counter,i,j,d;

    for(;1;)
    {
        fplace();
        printer();
        printf("\n");
        printf("1 left 2 right 3 up 4 down: ");
        scanf("%d",&d);
        switch(d)
        {
        case 1:
            for(i = 1;i <= M;i++)
            {
                for(j = 2;j <= M;j++)
                {
                    cube[i][1] += cube[i][j];
                    cube[i][j] = 0;
                }
            }
        break;

        case 2:
            for(i = 1;i <= M;i++)
            {
                for(j = 1;j <= M - 1;j++)
                {
                    cube[i][M] += cube[i][j];
                    cube[i][j] = 0;
                }
            }
        break;

        case 3:
            for(i = 1;i <= M;i++)
            {
                for(j = 2;j <= M;j++)
                {
                    cube[1][i] += cube[j][i];
                    cube[j][i] = 0;
                }
            }
        break;

        case 4:
            for(i = 1;i <= M;i++)
            {
                for(j = 1;j <= M - 1;j++)
                {
                    cube[M][i] += cube[j][i];
                    cube[j][i] = 0;
                }
            }
        break;
        }
        if((cube[1][1] % V == 0 &&  cube[1][1] != 0)||
           (cube[1][M] % V == 0 &&  cube[1][M] != 0)||
           (cube[M][1] % V == 0 &&  cube[M][1] != 0)||
           (cube[M][M] % V == 0 &&  cube[M][M] != 0))
        {
            break;
        }
    }
    printf("\n\nYou win!!!!!!!\n");
    printer();
    getchar();
    getchar();
}

void printer(void)
{
    int i,j;

    printf("*");
    for(i = 1;i <= 4 * M;i++)
    {
        printf("*");
    }
    printf("*");
    printf("\n");

    for(i = 1;i <= M;i++)
    {
        printf("*");
        for(j = 1;j <= M;j++)
        {
            if(cube[i][j] != 0)
            {
                printf("%4d",cube[i][j]);
            }
            else
            {
                printf("  --");
            }
        }
        printf("*\n");
    }

    printf("*");
    for(i = 1;i <= 4 * M;i++)
    {
        printf("*");
    }
    printf("*");
    printf("\n");
}

int random(int upper,int twist)
{
    int j;

    srand((int)clock() + twist * 100000);
    j = 1 + rand() % (upper - 1);

    return j;
}

void place(void)
{
    int counter,i,j;

    for(counter = 1;counter <= 1 + random(3,0);counter ++)
    {
        i = random(M, 0);
        j = random(M,i);

        if(cube[i][j] == 0)
        {
            cube[i][j] = 1;
        }
        else
        {
            counter --;
        }
    }

    return;
}

void fplace(void)
{
    int counter,i,j;

    for(counter = 1;counter <= 1;counter ++)
    {
        i = random(M, 13);
        j = random(M,i);

        cube[i][j] += P;
    }

    return;
}


















