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
		printf("Last digit of %i is %i and is greater than 5", n);
	else if (n == 0) 
		printf("Last digit of %i is %i and is 0", n);
	else
		printf("Last digit of %i and is %i less than 6 and not 0", n);
	return (0);
}
