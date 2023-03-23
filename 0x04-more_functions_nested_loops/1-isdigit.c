#include "main.h"
#include <stdio.h>
/**
 * _isdigit - a function that checks for a digit (0 through 9).
 *  Decription -Returns 1 if c is a digit
 * Returns 0 otherwise
 * Return: Always 0.
 */
int _isdigit(int c)
{
char c;

for (c = 0; c <= 9; c++)
{
if (c <= 48 && c >= 57)
{
_putchar(c);
}
else
{
_putchar(c)'
}
}
_putchar('\n');

return (0);
}
