#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  int n;

  n = 402;
  printf("n=%d\n", n);
  reset_to 98(&n);
  printf("n=%d\n", n);
  return (0);
}
#include "main.h"
/**
 * reset_to_98-Resets the value of a variable back to 98.
 * @n:Variable to be reset.
 * Return:Void.
 */

void reset_to_98(int *n)
{
	*n = 98;
}
