#include <stdio.h>
/**
 * main - Print Uppercase Alphabet(a-z).
 * Return: 0
 */
int main(void)
{
	char c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
