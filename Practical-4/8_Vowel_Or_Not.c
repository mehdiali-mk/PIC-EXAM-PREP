/*
8. W.A.P. to check whether input alphabet is a vowel or not using switch case.
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;

    printf("Enter the character = ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\n%c is vowel.", ch);
        break;

    default:
        printf("\n%c is not a vowel.", ch);
        break;
    }
    getch();
}