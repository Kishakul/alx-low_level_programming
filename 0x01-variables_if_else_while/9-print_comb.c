#include <stdio.h>

/**
* main - program that prints all possible combination of single-digit number
*Return: always 0 (success)
*/
int main(void)
{
char n;
for (n = 0; n < 10; ++n)
{
putchar(n % 10 + '0');
if (n != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
