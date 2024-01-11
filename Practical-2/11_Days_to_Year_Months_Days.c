/*
11. W.A.P to Enter days and convert them into year, month and days.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int noOfDays, year, month, day;

    printf("Enter the number of Days = ");
    scanf("%d", &noOfDays);

    year = noOfDays / 365;
    noOfDays = noOfDays % 365;
    month = noOfDays / 30;
    noOfDays = noOfDays % 30;
    day = noOfDays;

    printf("\nYear = %d\nMonth = %d\nDay = %d", year, month, day);
    getch();
}