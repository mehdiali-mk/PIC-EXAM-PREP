/*
8. W.A.P to find are of Triangle.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int base, height;
    float area;
    printf("Enter the base = ");
    scanf("%d", &base);

    printf("Enter the height = ");
    scanf("%d", &height);

    area = 0.5 * base * height;

    printf("\nArea = %f", area);
    getch();
}