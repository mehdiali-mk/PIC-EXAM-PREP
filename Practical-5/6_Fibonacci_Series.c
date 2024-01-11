/*
6. W.A.P. to display Fibonacci series 1, 1, 2, 3, 5, 8, ........
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int number, a = 0, b = 1, sum = 1;

    printf("Enter the number = ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        printf("%d\t", sum);
        sum = a + b;
        a = b;
        b = sum;
    }

    getch();
}