#include <stdio.h>

/**
* main - three possible digit numbers in ascending order
* Return: Always 0 (success)
*/
int main(void)
{
int unit = '0';
int tens = '0';
int hundred = '0';
for (hundred = '0'; hundred <= '9'; hundred++)
{
for (tens = '0'; tens <= '9'; tens++)
{
for (unit = '0'; unit <= '9'; unit++)
{
if (!((unit == tens) || (tens == hundred) ||
(tens > unit) || (hundred > tens)))
{
putchar(hundred);
putchar(tens);
putchar(unit);
if (!(unit == '9' && tens == '8' && hundred == '7'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
