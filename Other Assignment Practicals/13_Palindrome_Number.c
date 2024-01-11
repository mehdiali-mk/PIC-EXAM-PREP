/*
13. W.A.P to find the given number is palindrome number or not.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int number, r, reverse = 0, temp;

    printf("Enter the number = ");
    scanf("%d", &number);

    temp = number;
    while (number > 0)
    {
        r = number % 10;
        reverse = reverse * 10 + r;
        number = number / 10;
    }

    if (temp == reverse)
    {
        printf("\n%d is a Palindrome Number.", temp);
    }
    else
    {
        printf("\n%d is not a Palindrome Number.", temp);
    }
    getch();
}