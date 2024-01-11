/*
1. WAP to print 1to n and n to 1 numbers.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n;

    printf("Enter the number = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    getch();
}