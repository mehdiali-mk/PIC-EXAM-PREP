/*
4. W.A.P. to read the distance in Kilometres. And convert it into Metres. And Centimetres.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int km, m, cm;

    printf("Enter the distance in km = ");
    scanf("%d", &km);

    printf("\nDistance in meters(m) = %d", km * 1000);
    printf("\nDistance in centimeter(cm) = %d", km * 1000 * 100);
    getch();
}