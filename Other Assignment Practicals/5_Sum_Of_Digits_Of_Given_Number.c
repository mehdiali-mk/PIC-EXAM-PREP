/*
5. WAP to print sum of digits of a given number (i.e. 123 = 1 + 2 + 3 = 6 )*
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int number, r, sum = 0;

    printf("Enter the number = ");
    scanf("%d", &number);

    while (number > 0)
    {
        r = number % 10;
        sum = sum + r;
        number = number / 10;
    }

    printf("\nSum = %d", sum);

    getch();
}