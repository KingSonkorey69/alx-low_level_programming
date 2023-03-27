#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	*s[10] = 'Samuel';

	_putchar("The Lenght of the string is: ", strlen(*s));
}
