#include <stdlib.h>
#include "main.h"

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
char *ar;
unsigned int i = 0;
unsigned int j = 0;
unsigned int m;
unsigned int p;
unsigned int k = 0;
unsigned int len;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i])
i++;
while (s2[j])
j++;

if (j > n)
j = n;

len = i + j;

ar = malloc(sizeof(char) * (len + 1));
if (ar == NULL)
return (NULL);

for (p = 0; p < i; p++)
ar[k++] = s1[p];
for (m = 0; m < j; m++)
ar[k++] = s2[m];

ar[k] = '\0';
return (ar);
}
