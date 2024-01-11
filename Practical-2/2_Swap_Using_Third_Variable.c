/*
2. W.A.P. to swap the values of two variables using third variable.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, temp;

    printf("Enter the 1st number = ");
    scanf("%d", &num1);
    printf("Enter the 2nd number = ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n1st Number = %d\n2nd Number = %d", num1, num2);
    getch();
}