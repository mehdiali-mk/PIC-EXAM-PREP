/*
7. W.A.P. to read number until you entered positive numbers.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int number;

    do
    {
        printf("\nEnter the number = ");
        scanf("%d", &number);
    } while (number <= 0);

    getch();
}