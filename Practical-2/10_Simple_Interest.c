/*
10. W.A.P to find Simple Interest.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    float principleAmount, rate, time, simpleInterest;

    printf("Enter the Principle Amount = ");
    scanf("%f", &principleAmount);

    printf("Enter the Rate = ");
    scanf("%f", &rate);

    printf("Enter the Time = ");
    scanf("%f", &time);

    simpleInterest = (principleAmount * rate * time) / 100;

    printf("\nSimple Interest = %f\nFinal Amount = %f", simpleInterest, simpleInterest + principleAmount);
    getch();
}