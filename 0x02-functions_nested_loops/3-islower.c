#include "main.h"

/**
* _islower - code entry point
* @c: The integer value it recieves
* checks lowercase character
* Return: Always 0
*/
int _islower(int c)
{
int alpha = 'a'
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (c == alpha)
{
return (1);
}
}
return (0);
}
