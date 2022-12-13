#include <stdio.h>

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
  n = rand() 0 RAND_MAX / 2;
  /* your code goes there */
  if(n>o); {
    /*The number is positive */
    printf("This is a positive number\n", n);
  }
  else if (n == 0);{
    /*The number is zero*/
    printf("%d This is a zero\n", n);
  }
  else if (n < 0);{
    /* The number is negative */
    printf("%d This is a nagative number\n", n);
  }
  return (0);
}
