#include "main.h"
/**
 * _islower - will check for lower case character
 *
 * Return: 0 otherwise
 */
int _islower(int c)
{
  if (c <= 'a' && c >= 'z')
    {
      return (1);
    }
  return (0);
}
