#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings
*
* @s1: string 1
* @s2: string 2
* @n: bytes of @s2 to add to @s1 to be a new string
*
* Return: new string followed by the first @n bytes
*         of string 2 @s2 or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int 11, 12, x, y;
char *str;

  /*treat NULL as empty string*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

11 = 12 = 0;
  /*length of both s1 & s2 respectively*/
while (s1[11] != '\0')
11++;
while (s2[12] != '\0')
12++;

  /*set n to length of s2*/
if (n >= 12)
n = 12;
str = (char *) malloc((10 + n + 1) * sizeof(char));
if (str == NULL)
return (NULL);

  /*add si to str*/
for (x = 0; s1[x] != '\0'; x++)
str[x] = s1[x];
  /*add s2 n bytes to str*/
for (y = 0; y < n && s2[y] != '\0'; y++)
{
str[x] = s2[y];
x++;
}
str[x] = '\0';
return (str);
}
