/*
2. W.A.P. to make simple calculator using Switch Case.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, choice;

    printf("Enter the 1st number = ");
    scanf("%d", &num1);

    printf("Enter the 2nd number = ");
    scanf("%d", &num2);

    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n");
    printf("Enter the choice = ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n%d + %d = %d", num1, num2, num1 + num2);
        break;

    case 2:
        printf("\n%d - %d = %d", num1, num2, num1 - num2);
        break;
    case 3:
        printf("\n%d * %d = %d", num1, num2, num1 * num2);
        break;
    case 4:
        printf("\n%d / %d = %d", num1, num2, num1 / num2);
        break;
    case 5:
        printf("\n%d %% %d = %d", num1, num2, num1 % num2);
        break;

    default:
        printf("\n\nWrong choice.\nEnter the choice from 1 to 5.");
        break;
    }
    getch();
}