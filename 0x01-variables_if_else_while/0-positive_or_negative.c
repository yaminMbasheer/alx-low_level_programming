#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf(" %d positive  \n", n);
}
else if (n == 0)
{
printf(" %d  zero \n", n);
}
else
{
printf("%d nagetive  \n", n);
}
return (0);
}
