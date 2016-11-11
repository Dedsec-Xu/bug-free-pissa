#include <stdio.h>
#include <stdlib.h>
#include "233.h"
#define size 7

int main()
{
    int num[size],i,s = 0;

    input_array_value(num,size);

    printf("\nThe original array:\n");
    display_array(num,size);


    printf("\nThe increased display of your input is:\n");
    increase_array_value(num,size);
    display_array(num,size);

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

