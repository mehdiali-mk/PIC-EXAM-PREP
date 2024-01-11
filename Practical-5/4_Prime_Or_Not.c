/*
4. W.A.P. to decide whether number is prime or not.
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
        printf("\n%d is a Prime Number.", number);
    }
    else
    {
        printf("\n%d is not a Prime Number.", number);
    }

    getch();
}