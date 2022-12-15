#include "main.h"

/**
* print_line - draws a stright line i the terminal
* @n: number of character to check
* Return: if n <= 0, print \n
*/
void print_line(int n)
{
int c;
for (c = 0; c < n; c++)
_putchar('_');
_putchar('\n');
}
