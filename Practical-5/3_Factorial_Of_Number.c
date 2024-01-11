/*
3. W.A.P. to read number & find its factorial.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int number, fact = 1;

    printf("Enter the number = ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    printf("\nFactorial = %d", fact);

    getch();
}