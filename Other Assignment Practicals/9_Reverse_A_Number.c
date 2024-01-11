/*
9. WAP to reverse the given number (i.e. 123 = 321 ).***
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int number, reverse = 0, r;

    printf("Enter the number = ");
    scanf("%d", &number);

    while (number > 0)
    {
        r = number % 10;
        reverse = (reverse * 10) + r;
        number = number / 10;
    }

    printf("\nReverse Number = %d", reverse);

    getch();
}