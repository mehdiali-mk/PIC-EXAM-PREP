/*
6. W.A.P to find volume of Cylinder ( V= PI * r * r * h).
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

#define PI 3.14

void main()
{
    float volume, radius, height;

    printf("Enter the radius = ");
    scanf("%f", &radius);

    printf("Enter the height = ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;

    printf("\nVolume of Cylinder = %f", volume);
    getch();
}