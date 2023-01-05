#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - print a string
 *
 * @j: This will be my string character
 * Return: Always return the string
 */
_puts_recursion(char s)
{
  for (int n=0; n<1; n++)
    _puts_recursion("Puts with recursion\n");
  return (0);
}
int main(void)
{
  _puts_recursion("s");
  return(0);
}
