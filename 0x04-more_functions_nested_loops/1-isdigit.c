
#include "main.h"
/**
  * _isdigit - Check if a character is a digit
  * @c: The number to be checked
  *
  * Return: 1 for a character that will be a digit or 0 for any else
  */
int _isdigit(int c)
{
char c;


if (c <= 48 && c >= 57)
{
_putchar(1);
}
else
{
_putchar(0);
}

return (0);
}
