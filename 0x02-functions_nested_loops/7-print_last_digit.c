#include "main.h"

/**
* print_last_digit - prints last digit of an number
* @n: the int to check
* Return: value to the last digit
*/
int print_last_digit(int n)
{
int j;
if (n < 0)
n = -n;
j = n % 10;
if (j < 0)
j = -j;
_putchar(j + '0');
return (j);
}
