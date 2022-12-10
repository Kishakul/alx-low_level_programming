#include <stdio.h>

/**
* main - print all possible different combinations of two digits
* separated with a , and space
* Return: always 0 (success)
*/
int main(void)
{
int n;
int d;
for (d = '0'; d <= '9'; ++d)
{
for (n = '0'; n <= '9'; ++n)
{
if (!((d == n) || (d > n)))
{
putchar(n);
putchar(d);
if (!(n == '9' && d == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
