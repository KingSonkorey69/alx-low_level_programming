#include "main.h"
/**
 *_isalpha - a function that checks for alphabetic character.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase.
 */
int _isalpha(int c);
{
if (c > 96 && c < 122 || c > 65 && c < 90)
return (1);
else
return (0);
}
