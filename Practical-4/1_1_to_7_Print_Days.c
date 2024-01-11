/*
1. W.A.P. to read digits from 1 to 7 & prints days of week according to input.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int day;

    printf("Enter the day = ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("\nMonday");
        break;

    case 2:
        printf("\nTuesday");
        break;
    case 3:
        printf("\nWednesday");
        break;
    case 4:
        printf("\nThursday");
        break;
    case 5:
        printf("\nFriday");
        break;
    case 6:
        printf("\nSaturday");
        break;
    case 7:
        printf("\nSunday");
        break;

    default:
        printf("\nEnter the correct choice.");
    }
    getch();
}