#include<stdio.h>
/**
 * main - the lowercase alphabet in reverse.
 * Return: 0
 */
iint main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
