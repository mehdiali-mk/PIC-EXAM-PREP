/*
5. W.A.P to find are of Circle ( A= PI * r * r).
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

#define PI 3.14

void main()
{
    float area, radius;

    printf("Enter the raidus = ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("\nArea of circle = %f", area);
    getch();
}