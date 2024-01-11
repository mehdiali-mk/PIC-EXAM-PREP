/*
6. W.A.P. to display each of the following patterns
a)  *       b)       *      c) * * * *     d) * * * *    e) 1          f) 1
    * *            * *         * * *            * * *       1 2           2 2
    * * *        * * *         * *                * *       1 2 3         3 3 3
    * * * *    * * * *         *                    *       1 2 3 4       4 4 4 4
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
}