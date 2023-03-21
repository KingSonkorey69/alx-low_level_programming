#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 * @n: type int integer, can be negative or positive
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1 if +, 0 if 0, and -1 if -
 */

int print_sign(int n)
{
if (n > 0)
	return (1);
	_putchar('+');
else if (n < 0)
	return (-1);
	_putchar('-');
else
	return (0);
	_putchar(0);
}
