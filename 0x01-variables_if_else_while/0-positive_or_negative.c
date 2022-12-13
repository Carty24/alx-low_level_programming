#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - positive anything is better than negative nothing
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if( n>0 )
{
/*The number is positive */
printf("%d is positive\n", n);
}
else if (n == 0)
{
/*The number is zero*/
printf("%d is zero\n", n);
}
else if (n < 0)
{
    /* The number is negative */
    printf("%d is nagative\n", n);
  }
  return (0);
}
