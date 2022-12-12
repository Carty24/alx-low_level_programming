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
printf("The size of the integer is: %lu.\n", (long unsigned)sizeof (i));
printf("The size of the char is: %lu.\n", (long unsigned)sizeof (c));
printf("The size of the float is %lu.\n", (long unsigned)sizeof (f));
printf("The size of the long int %lu.\n", (long unsigned)sizeof (li));
printf("The size of the long long int %lu.\n", (long unsigned)sizeof (lli));
return(0);
}
