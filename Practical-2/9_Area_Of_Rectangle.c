/*
9. W.A.P to find are of Rectangle.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int length, breadth, area;

    printf("Enter the Length = ");
    scanf("%d", &length);

    printf("Enter the Breadth = ");
    scanf("%d", &breadth);

    area = length * breadth;
    printf("\nArea = %d", area);
    getch();
}