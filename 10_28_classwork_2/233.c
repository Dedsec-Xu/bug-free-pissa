#include <stdio.h>
#include <stdlib.h>
#include "233.h"

void input_array_value(int array_name[],int array_size)
{
    int i;
    printf("Please input %d integers values:\n",array_size);//too simple don't want to write this
    for(i = 0;i < array_size;i ++)//too simple don't want to write this
    {
        scanf("%d",&array_name[i]);//too simple don't want to write this
    }
}

void display_array(int array_name[],int array_size)
{
    int i;

    for(i = 0;i < array_size;i++)
    {
        printf("%d ",array_name[i]);
    }
}

void display_char_array(char array_name[],int array_size)
{
    printf("%s ",array_name);
}

void increase_array_value(int array_name[],int array_size)
{
    int i;

    for(i = 0;i < array_size;i++)
    {
        array_name[i]++;
    }
}

void decrease_array_value(int array_name[],int array_size)
{
    int i;

    for(i = 0;i < array_size;i++)
    {
        array_name[i]--;
    }
}

void swap_upper_lower(char array_name[],int array_size)
{
    int i;

    for(i = 0;i < array_size;i++)
    {
        if(array_name[i] <= 'z' && array_name[i] >= 'a')
        {
            array_name[i] = array_name[i] - 'a' + 'A';
        }
        else if(array_name[i] <= 'A' && array_name[i] >= 'Z')
        {
            array_name[i] = array_name[i] - 'A' + 'a';
        }
    }
}
