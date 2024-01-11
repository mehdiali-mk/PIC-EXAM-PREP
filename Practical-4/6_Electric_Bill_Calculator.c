/*
6. W.A.P. to calculate electricity bill.( <=100 RS.4 / units)
>100 and <=300 Rs. 4.50 / units
>300 and <=500 Rs. 4.70 / units
>500 Rs. 5/units.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    float units, bill;

    printf("Enter the electric unit = ");
    scanf("%f", &units);

    if (units >= 0 && units <= 100)
    {
        printf("\nBill = %f", units * 4);
    }
    else if (units > 100 && units <= 300)
    {
        printf("\nBill = %f", units * 4.50);
    }
    else if (units > 300 && units <= 500)
    {
        printf("\nBill = %f", units * 4.70);
    }
    else if (units > 500)
    {
        printf("\nBill = %f", units * 5);
    }
    else
    {
        printf("\nPlease enter the correct units.");
    }
    getch();
}