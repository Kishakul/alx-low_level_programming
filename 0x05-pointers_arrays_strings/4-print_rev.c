#include "main.h"

/**
* _rev - reverse a string
* @s: string to reverse
* Return: string in reverse
*/
void _rev(char *s)
{
int i = 0;
while (s[i] != 0)
{
i++;
}
while (i > 0)
{
i--;
_putchar(s[i]);
}
_putchar('\n');
}
