#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line
* @size: 'size of the triangle
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j, k;
j = 1;
for (k = 0; k <= size - j; k++)
{
_putchar(' ');
for (i = 0; i < j; i++)
{
_putchar('#');
}
b++;
_putchar('\n');
}
}
}
