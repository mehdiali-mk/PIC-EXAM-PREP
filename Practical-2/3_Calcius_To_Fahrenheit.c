/*
3. W.A.P. to read temperature in Celsius and convert it into Fahrenheit.
(F=1.8*C+32)
Author: Mehdiali Kadiwala
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int celsius, fahrenheit;

    printf("Enter the temperature in celsius = ");
    scanf("%d", &celsius);

    fahrenheit = (1.8 * celsius) + 32;
    printf("\nTemperature in Fahrenheit = %d", fahrenheit);
    getch();
}