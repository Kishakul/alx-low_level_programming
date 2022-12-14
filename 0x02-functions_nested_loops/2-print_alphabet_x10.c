#include "main.h"

/**
* print_alphabet_x10 - entry point
*Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
int num;
char ch;
num = 0;
for (num = 0; num < 10; num++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
}
