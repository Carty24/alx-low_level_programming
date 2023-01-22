#include "main.h"
/**
 * print_square - entring a square shape
 * @size: shape of the square
 * return: a # made square
 */
void print_square(int size)
{
	int n, j;

	n = size;
	if (n > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (n = 0; n < size; n++)
				_putchar('#');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
