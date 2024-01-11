/*
7. WAP to print prime number from 1 to 100.**
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j;
    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }

        if (j == i)
        {
            printf("%d\t", i);
        }
    }

    getch();
}