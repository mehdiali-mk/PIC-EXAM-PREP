/*
2. W.A.P. to find maximum number using conditional operator.
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

    (num1 > num2) ? printf("\n1st number %d is max", num1) : printf("\n2nd number %d is max", num2);
    getch();
}