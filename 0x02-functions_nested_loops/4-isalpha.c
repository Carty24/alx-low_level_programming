#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c: @ an alphabet, lower or upper case
 * Return: 1 if alphabet and zero otherwise
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
