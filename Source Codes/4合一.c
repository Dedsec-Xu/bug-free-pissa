#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first=4,i,j,y=0,m=0,d=0,selection,leap;
    int month[12] = {0,0,31,59,90,120,151,181,212,243,273,304,334},month2[]= {0,31,28,31,30,31,30,31,31,30,31,30,31},a[2];
    int * s[] = {"Sunday","Monday","Tuesday","Wedsday","Thursday","Friday","Saturday"};
    int * weekhead[] = {"Sun.\t","Mon.\t","Tue.\t","Wed.\t","Thu.\t","Fri.\t","Sat.\t"};
    int * head[] = {"","Jan.","Feb.","Mar.","Apr.","May.","June","July.","Aug.","Sept.","Oct.","Nov.","Dec."};

    printf("What do you want to do?\n1.Calculate what's the day.\n2.Print a menology\n3.Print a Week Calendar\n4.Quit\nFunction 3 4 currently not available.\n\nType your choice: ");
    scanf("%d",&selection);
    while(selection < 1 || selection > 4)
    {
        printf("\n");
        printf("\aIllegal input! Please try again: ");
        scanf("%d",&selection);
    }

    switch ( selection )
    {
        case 1 :
            printf("\nWhich year?\n");
            scanf("%d",&y);
            while(y <= 0)
            {
                printf("\n");
                printf("\aIllegal input! Please try again: ");
                scanf("%d",&y);
            }
            leap = (y % 400 == 0 || ( y % 4 == 0 && y % 100 != 0 ));

            printf("Which month?\n");
            scanf("%d",&m);
            while(m <= 0 || m >= 13)
            {
                printf("\n");
                printf("\aIllegal input! Please try again: ");
                scanf("%d",&m);
            }
            month2[2] += leap;

            printf("Which day?\n");
            scanf("%d",&d);
            while(d <= 0 || d > (month2[m] +((m == 2 && leap ==1) ? 1 : 0)))
            {
                printf("\aIllegal input! Please try again: ");
                scanf("%d",&d);
                printf("\n");
            }

            printf("\nIt's %s!\n",s[((y - 1) + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400 + d + (leap == 1 && m >= 3) + month[m]) % 7]);
        break;

        case 2 :
            printf("\nWhich year?\n");
            scanf("%d",&y);
            while(y <= 0)
            {
                printf("\n");
                printf("\aIllegal input! Please try again: ");
                scanf("%d",&y);
            }
            leap = (y % 400 == 0 || ( y % 4 == 0 && y % 100 != 0 ));

            printf("Which month?\n");
            scanf("%d",&m);
            while(m <= 0 || m >= 13)
            {
                printf("\n");
                printf("\aIllegal input! Please try again: ");
                scanf("%d",&m);
            }
            month2[2] += leap;

            // the * 1 here(V)should be 365, but 365 % 7 == 1,so 365 is replaced to aviod overflow
            d = ((y - 1) + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400 + d + (leap == 1 && m >= 3) + month[m] + 1) % 7;

            printf("\n\t\t\t%d\n\t\t\t%s\n",y,head[m]);                                     //print year month and return to next line

            for(i = 0;i <= 6;i++)
            {
                printf("%s",weekhead[i]);                                                   //print chart head for the menology
            }

            printf("\n");

            for(i = 0;i < d;i ++)                                                           //the number of the blanks should be d - 1
            {
                printf("\t");                                                               //put the first day of the month on the right position
            }

            for(i = 1;i < 1 + month2[m];i ++)
            {
                printf("%d\t",i);                                                           //print the date
                if((i + d) % 7 == 0)
                {
                    printf("\n");                                                           //return to next line when (blank + date) % 7 == 0
                }
            }
        break;

        case 3 :

        break;

        case 4 :
        break;
    }
    getchar();

    return 0;
}






















