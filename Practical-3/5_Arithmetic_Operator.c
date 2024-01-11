/*
5. W.A.P. to demonstrate arithmetic operator.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2;

    printf("Enter the 1st number = ");
    scanf("%d", &num1);

    printf("Enter the 2nd number = ");
    scanf("%d", &num2);

    printf("\n%d + %d = %d", num1, num2, num1 + num2);
    printf("\n%d - %d = %d", num1, num2, num1 - num2);
    printf("\n%d * %d = %d", num1, num2, num1 * num2);
    printf("\n%d / %d = %d", num1, num2, num1 / num2);
    printf("\n%d %% %d = %d", num1, num2, num1 % num2);
    getch();
}