/*
5. W.A.P. to decide whether number is Armstrong or not .
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int number, temp, r, sum;

    printf("Enter the number = ");
    scanf("%d", &number);

    temp = number;

    while (number > 0)
    {
        r = number % 10;
        sum = sum + r * r * r;
        number = number / 10;
    }

    if (sum == temp)
    {
        printf("\n%d is Armstrong Number.", temp);
    }
    else
    {
        printf("\n%d is not a Armstrong Number.", temp);
    }

    getch();
}