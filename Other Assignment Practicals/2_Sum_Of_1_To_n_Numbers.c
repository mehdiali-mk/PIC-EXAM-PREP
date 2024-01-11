/*
2. WAP to print to print sum of 1 to n numbers.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, sum = 0;

    printf("Enter the number = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("\nSum = %d", sum);
    getch();
}