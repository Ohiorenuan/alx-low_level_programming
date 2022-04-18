#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int n;
	int add;

	add = 0;
	for
		(n = 1023;
		 n > 0;
		 n--)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			add += n;
		}
	}
	printf("%d\n", add);
	return (0);
}
