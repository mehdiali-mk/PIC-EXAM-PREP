/*
2. W.A.P. to print table of 5 for first 10 iterations.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d X %d = %d", 5, i, 5 * i);
    }

    getch();
}