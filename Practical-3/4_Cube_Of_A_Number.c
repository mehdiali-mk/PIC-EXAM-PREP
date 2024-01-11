/*
4. W.A.P. to find cube of a number.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int number, cube;

    printf("Enter the number = ");
    scanf("%d", &number);

    cube = number * number * number;

    printf("\nCube = %d", cube);
    getch();
}