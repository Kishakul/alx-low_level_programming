#include <stdio.h>

/**
* main - main program that prints alphabet in reverse.
* Return: always 0 (success)
*/
int main(void)
{
int ch = 'z';
for (ch = 0; ch >= 'a'; --ch)
{
putchar(ch);
}
putchar('\n');
return (0);
}
