#include<stdio.h>

int i=0;

int main()
{
    int i=3,j=1,k=1;
    huisu();
    return 0;
}

void huisu()
{
    printf("wtf?\n");
    i ++;
    while(i<=100)
    huisu();

}
