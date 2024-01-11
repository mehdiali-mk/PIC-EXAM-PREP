/*
3. WAP to print following series using loop 1 3 5 7 9 …..55.*
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    for (int i = 1; i <= 55; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }

    getch();
}