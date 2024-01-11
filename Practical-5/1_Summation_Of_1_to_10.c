/*
1. W.A.P. to find the summation of 1 to 10 digits.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("\nSummation of 1 to 10 numbers = %d", sum);
    getch();
}