/*
5. W.A.P. to decide whether year is leap year or not.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int year;

    printf("Enter the year = ");
    scanf("%d", &year);

    if (year % 4 != 0)
    {
        printf("\n%d is not a leap year.", year);
    }
    else
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("\n%d is a leap year.", year);
            }
            else
            {
                printf("\n%d is not a leap year.", year);
            }
        }
        else
        {
            printf("\n%d is a leap year.", year);
        }
    }
    getch();
}