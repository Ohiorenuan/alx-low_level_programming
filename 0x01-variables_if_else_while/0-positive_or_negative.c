#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - here's the description
 *
 *Return: well a 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 1)
		printf("%d is negative\n", n);
	else if (n > 1)
		printf("%d is positve\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
