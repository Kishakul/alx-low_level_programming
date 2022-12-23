#include "main.h"

/**
* print_number - takes an integer and prints it with _putchar
* @n: integer to print
* Return: void
*/
void print_number(int n)
{
unsigned int n1;
n1 = n;

if (n < 0)
{
_putchar('-');
n1 = -n;
}
if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
