#include <stdio.h>

/**
* main - main program that prints the alphabet in lowercase
* Return: Always 0 (success)
*/
int main(void)
{
int ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
