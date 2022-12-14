#include "main.h"
/**
 * _islower - will check for lower case character
 *
 * @c: is a lowercase character
 *
 * Return: 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
