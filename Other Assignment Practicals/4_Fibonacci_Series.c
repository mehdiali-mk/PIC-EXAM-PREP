/*
4. WAP to print the Fibonacci series up to given number.**
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int number, a = 0, b = 1, sum = 0;

    printf("Enter the number = ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        printf("%d\t", sum);
        a = b;
        b = sum;
        sum = a + b;
    }

    getch();
}