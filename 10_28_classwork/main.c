#include <stdio.h>
#include <stdlib.h>
#define size 7

void display_array(int [],int array_size);
void increase_array_value(int [],int array_size);


int main()
{
    int num[size],i,s = 0;

    printf("Please input %d integers values:\n",size);//too simple don't want to write this
    for(i = 0;i < size;i ++)//too simple don't want to write this
    {
        scanf("%d",&num[i]);//too simple don't want to write this
    }

    printf("\nThe reverse display of your input is:\n");//too simple don't want to write this
    for(i = size - 1;i >= 0;i --)//too simple don't want to write this
    {
        printf("%d ",num[i]);//too simple don't want to write this
        s += num[i];
    }

    printf("\n\nSum = %d",s);
    printf("\nAverage = %.2f",(float) s / size);
    if (size % 2 == 0)
    {
        printf("\nMedian No.1 = a[%d] = %d",size / 2 - 1,num[size / 2 - 1]);
    }
    printf("\nMedian%s = a[%d] = %d\n",(size % 2 == 0) ? " No.2" :"",size / 2,num[size / 2]);


    return 0;
}

void display_array(int array_name[],int array_size)
{
    int i;

    for(i = 0;i < array_size;i++)
    {
        printf("%dd ",array_name[i])
    }
}

void increase_array_value(int array_name[],int array_size)
{
    int i;

    for(i = 0;i < array_size;i++)
    {
        array_name[i]++;
    }

}
