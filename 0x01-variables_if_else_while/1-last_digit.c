#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("%i and is greater than 5", n);
	else if (n == 0) 
		printf("%i and is 0", n);
	else
		printf("%i and is less than 6 and not 0", n);
	return (0);
}
