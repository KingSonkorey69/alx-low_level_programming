#include "main.h"
/**
 * _islower - a function that checks for lowercase character.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase.
 */
int _islower(int c)
{
if (c > 96 && c < 122)
return (1);
else
return (0);
}
