#include "main.h"
/**
* main - Entry point.
* print_alphabet - Print alphabet in lowercase.
* Return: 0
*/
void print_alphabet(void)
{
char ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
