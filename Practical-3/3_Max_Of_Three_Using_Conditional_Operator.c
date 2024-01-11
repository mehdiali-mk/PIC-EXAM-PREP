/*
3. W.A.P. to minimum number from three number using conditional operator.
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

    (num1 > num2) ? (num1 > num3) ? printf("\n1st number %d is max", num1) : printf("\n3rd number %d is max", num3) : (num2 > num3) ? printf("\n2nd number %d is max", num2)
                                                                                                                                    : printf("\n3rd number %d is max", num3);
    getch();
}