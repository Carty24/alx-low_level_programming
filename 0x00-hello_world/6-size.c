#include <stdio.h>
/**
 * main
 *
 * Return: Always (0)
 **/
int main(void)
{
int i;
char c;
float f;
long int li;
long long int lli;
printf("Size of the char: %lu.\n", (long unsigned)sizeof (c));
printf("Size of an int: %lu.\n", (long unsigned)sizeof (i));
printf("Size of the long int: %lu.\n", (long unsigned)sizeof (li));
printf("Size of the long long int: %lu.\n", (long unsigned)sizeof (lli));
printf("Size of the float: %lu.\n", (long unsigned)sizeof (f));
return(0);
}
