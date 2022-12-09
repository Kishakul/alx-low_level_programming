#include <stdio.h>
#include <stdlib.h>

/**
* main - print alphabet in lowercase
* letters except q and e
* Return: always 0 (success)
*/
int main(void)
{
int ch = 'a';
while (ch <= 'z')
{
if ((ch != 'e') && (ch != 'q'))
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
