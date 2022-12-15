#include "main.h"

/**
* print_diagonal - draw a diagonal line on the terminal
* @n: number of times \character should be printed
* Return: if n <= 0, print a \n
*/
void print_diagonal(int n)
{
int i, j;
if (n < 1)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
_putchar('\\');
else if (j < i)
_putchar(' ');
}
_putchar('\n');
}
}
