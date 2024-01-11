/*
6. W.A.P. to demonstrate bitwise operator.
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

    printf("\n%d & %d = %d", num1, num2, num1 & num2);
    printf("\n%d | %d = %d", num1, num2, num1 | num2);
    printf("\n%d ^ %d = %d", num1, num2, num1 ^ num2);
    printf("\n~%d = %d", num1, ~num1);
    printf("\n~%d = %d", num2, ~num2);
    printf("\n%d >> %d = %d", num1, num2, num1 >> num2);
    printf("\n%d << %d = %d", num1, num2, num1 << num2);

    getch();
}