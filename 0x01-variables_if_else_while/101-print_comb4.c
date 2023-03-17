#include<stdio.h>
/**
 * main - prints all possible different combinations of three digits..
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 800; i++)
	{
		j = i / 100;
		k = i % 100;

		putchar(j + '0');
		putchar(k + '0');

		if (i < 799)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
