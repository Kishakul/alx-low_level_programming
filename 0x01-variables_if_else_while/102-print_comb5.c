#include <stdio.h>

/**
* main - print all possible combination of two two-digit numbers
* Numbers should range from 0 to 99
* Return: Always 0 (success)
*/
int main(void)
{
int x, y, z;
int check1, check2;
for (x = 0; x < 10; x++)
{
check1 = x;
for (y = 0; y < 10; y++)
{
check2 = y;
for (z = 0; z < 10; z++)
{
if (check1 < y && check2 < z)
{
putchar(x % 10 + '0');
putchar(y % 10 + '0');
putchar(z % 10 + '0');
if (x != 7)
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
