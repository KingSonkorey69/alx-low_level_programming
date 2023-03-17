#include<stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase.
 * Return: 0
 */
int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
