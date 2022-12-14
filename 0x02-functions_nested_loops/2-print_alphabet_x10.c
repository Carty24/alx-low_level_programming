#include "main.h"
/**
 * main - print_alphabet_x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char j, k;
for (j=0; j<=9; j++)
{
for (k = 'a'; k <= 'z'; k++)
{
_punchar(k);
}
_punchar('\n');
}
}
