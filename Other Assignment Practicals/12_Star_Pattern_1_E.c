/*
12. WAP to print given pattern
a)  1       b) 1          c) 1          d) *        e) A
    2 2        1 2           2 3           * *         A B
    3 3 3      1 2 3         4 5 6         * * *       A B C
    4 4 4 4    1 2 3 4       7 8 9 10      * * * *     A B C D
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", 64 + j);
        }
        printf("\n");
    }

    getch();
}