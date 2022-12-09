#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - The main program will assign a random number to n
* Return: 0 if the last digit string of n is zero, print otherwise if not
*/
int main(void)
{
int n;
int num;

srand(time(0));
n = rand() - RAND_MAX / 2;
 printf("last digit of %d, is %d", n, n % 10);
num = n % 10;
if (num > 5)
printf("%d and is greater than 5\n", num);
if (num < 6 && num != 0)
printf("%d and is less than 6 and not 0\n", num);
if (num == 0)
printf("%d and is 0\n", num);
return (0);
}
