#include<stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase.
 * Return: 0
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (ch = 'a'; ch < 'h'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
