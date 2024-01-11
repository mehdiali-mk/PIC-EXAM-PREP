/*
8. WAP to find given number is prime or not.**
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int number, i;

    printf("Enter the number = ");
    scanf("%d", &number);

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            break;
        }
    }

    if (number == i)
    {
        printf("\n%d is a prime number.", number);
    }
    else
    {
        printf("\n%d is not a prime number.", number);
    }

    getch();
}