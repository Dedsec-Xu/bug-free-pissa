#include <stdio.h>
#include <stdlib.h>

int queen[9]={1,0,1,1,1,1,1,1,1};
int hang,sum;

int main()
{
    int i;
    for(i = 1;i <= 7;i++)
    {
        huisu(i);
    }
    for(i = 1;i <= 8;i++)
        printf("%d ",queen[i]);
}

int huisu(hang)
{
    int kexing;

    if(queen[hang] < 8)
    {
        kexing = place(hang);
        return kexing;
    }
    else
    {
        hang--;
        huisu(hang);
        return -1;               //if huisu returns 0,it means that it jumps back to the line above
    }
}

int place(hang)
{
    int i,j;

    queen[hang] = queen[hang] + 1;
    for(j = 1;j < hang;j++)
    {
        if(((queen[hang] - queen[j] != 0) &&
           (queen[hang] - queen[j] != hang - j) &&
           (queen[hang] - queen[j] != j - hang)) ||
           (queen[hang] > 8))
        {
            break;
            return queen[hang];
        }
        else
        {
            queen[hang] ++;
            return 0;
        }
    }
    huisu(hang);
}
