#include <stdio.h>

/**
 * main - entry point
 *
 * Return: value of 0
 */
int main(void)
{
	int n;

	printf("%d", 1);
	for (n = 2;
	     n <= 100;
	     n++)
	{
		if (n % 15 == 0)
		{
			printf(" %s", "FizzBuzz");
		}
		else
		{
			if (n % 3 == 0)
			{
				printf(" %s", "Fizz");
			}
			else if (n % 5 == 0)
			{
				printf(" %s", "Buzz");
			}
			else
			{
				printf(" %d", n);
			}
		}
	}
	printf("\n");
	return (0);
}
