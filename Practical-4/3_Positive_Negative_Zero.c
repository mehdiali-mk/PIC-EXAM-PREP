/*
3. W.A.P. to decide whether no is positive, negative or zero.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int number;

    printf("Enter the number = ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("\nNumber (%d) = Zero", number);
    }
    else if (number > 0)
    {
        printf("\nNumber (%d) = Positive", number);
    }
    else
    {
        printf("\nNumber (%d) = Negative", number);
    }
    getch();
}