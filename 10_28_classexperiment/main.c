#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main()
{
    char sentence[SIZE + 1];

    printf("Input a string: (no longer than %d chracters)\n",SIZE);
    scanf("%50s",&sentence);
    //sentence[0]+= 32;
    swap_upper_lower(sentence,SIZE + 1);
    display_char_array(sentence,SIZE + 1);

    return 0;
}

