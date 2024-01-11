/*
11. WAP to find given number is Armstrong or not.*****
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2;
    char choice;

    printf("Enter the 1st number = ");
    scanf("%d", &num1);

    printf("Enter the 2nd number = ");
    scanf("%d", &num2);

    getchar();
    printf("\n(+) Addition\n(-) Subtraction\n(*) Multiplication\n(/) Division\n(%%) Modulo\n");
    printf("Enter the choice = ");
    scanf("%c", &choice);

    switch (choice)
    {
    case '+':
        printf("\n%d + %d = %d", num1, num2, num1 + num2);
        break;

    case '-':
        printf("\n%d - %d = %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("\n%d * %d = %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("\n%d / %d = %d", num1, num2, num1 / num2);
        break;
    case '%':
        printf("\n%d %% %d = %d", num1, num2, num1 % num2);
        break;

    default:
        printf("\n\nWrong choice.\nEnter the choice from 1 to 5.");
        break;
    }

    getch();
}