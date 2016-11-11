/* wenquxing.c is a small game which was popular among primary school students.
 * version: v1.0.0
 * updated: 2016/10/19
 * author: Wilson Xu
 * contact: 1009181441@qq.com
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned int seed;
    int a[5] = {0,0,0,0,0},g[5] = {0,0,0,0,0};
    int aa = 0,bb = 0,i = 0,j,k = 1,selection;

    printf("|***************************************|\n");
    printf("|******\\*********|****|******-------****|\n");
    printf("|**----------****|****|*****|-------|***|\n");
    printf("|***\\******/*****|****|******-------****|\n");
    printf("|****\\****/****/-+----+-\\****/**|*******|\n");
    printf("|*****\\**/*****|*|****|*|***/---+---****|\n");
    printf("|******\\/******|-+----|-|**/****|*******|\n");
    printf("|******/\\******|*|****|*|****---+---****|\n");
    printf("|*****/**\\*****|-+----|-|*******|*******|\n");
    printf("|****/****\\****|*|****|*|*******|*******|\n");
    printf("|***/******\\***\\--------/**-----------**|\n");
    printf("|***************************************|\n");
    printf("|              1.Play!!!!!              |\n");
    printf("|              2.Quit!!!!!              |\n");
    printf("                Select=");
    scanf("%d", &selection);

    switch ( selection )
    {
        case 1:
        for(j = 1;j <= 4;j++)
        {
            srand((int)time(NULL));
            a[j] =1 + rand() % 9;
            i = j - 1;
            do
            {


                if(a[i] != a[j])
                {
                    i --;
                }
                else
                {
                    srand((int)time(NULL));
                    a[j] =1 + rand() % 9;
                }
            }
            while(i >= 1);
        }
        //printf("The answer is %d %d %d %d\n", a[1], a[2], a[3], a[4]);

        for(k = 1;k <= 8;k++)
        {
            printf("| Type your guess No.%d                  |\n", k);
            printf("                 ");
            scanf("%1d%1d%1d%1d", &g[1], &g[2], &g[3], &g[4]);

            for(i = 1;i <= 4;i++)
            {
                if(a[i] == g[i])
                {
                   aa ++;
                }
            }

            if(aa == 4)
            {
                printf("|***************************************|\n");
                printf("|*              You win!!!!            *|\n");
                printf("|***************************************|\n");
                printf("|*          Thanks for playing         *|\n");
                printf("|***************************************|\n");
                break;
            }

            for(i = 1;i <= 4;i++)
            {
                for(j = 1;j <= 4;j++)
                {
                    if(g[i] == a[j])
                    {
                        bb ++;
                        break;
                    }
                }
            }

            printf("                 %dA%dB\n", aa, bb - aa);

            if(k == 8)
            {
                printf("|***************************************|\n");
                printf("|*              You lose!!!            *|\n");
                printf("|***************************************|\n");
                printf("|*          The answer is %d%d%d%d         *|\n", a[1], a[2], a[3], a[4]);
                printf("|***************************************|\n");
                printf("|*          Thanks for playing         *|\n");
                printf("|***************************************|\n");
                break;
            }

            aa = 0;
            bb = 0;
        }
        getchar();
        break;

        case 2:
        printf("|***************************************|\n");
        printf("|*          Thanks for playing         *|\n");
        printf("|***************************************|\n");
        getchar();
        break;
    }
    getchar();
    return 0;
}
