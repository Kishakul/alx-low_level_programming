#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 * Return: always 0 (success)
 */
int main(void)
{
int c;
for (c = 0; c < 10; c++)
{
putchar(c % 10 + '0');
}
putchar('\n');
return (0);
}
