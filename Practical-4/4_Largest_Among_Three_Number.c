/*
3. W.A.P. to find largest number among three numbers.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, num3;

    printf("Enter the 1st number = ");
    scanf("%d", &num1);

    printf("Enter the 2nd number = ");
    scanf("%d", &num2);

    printf("Enter the 3rd number = ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("\n%d is largest.", num1);
        }
        else
        {
            printf("\n%d is largest.", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("\n%d is largest.", num2);
        }
        else
        {
            printf("\n%d is largest.", num3);
        }
    }
    getch();
}