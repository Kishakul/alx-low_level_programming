#include <stdio.h>

/**
* main - print number 1 to 100
* multiple of three print Fizz instead of a number
* and a multiple of five print Buzz
* Return: Always 0 (success)
*/
int main(void)
{
int c;
for (c = 1; c <= 100; c++)
{
if (c % 3 == 0 && c % 5 == 0)
{
printf("FizzBuzz");
}
else if (c % 3 == 0 && c % 5 != 0)
{
printf("Fizz");
}
else if (c % 5 == 0 && c % 3 != 0)
{
printf("Buzz");
}
else if (c == 1)
{
printf("%d", c);
}
else
{
printf(" %d", c);
}
}
printf("\n");
return (0);
}