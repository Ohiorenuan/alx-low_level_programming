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

	add = 8;
	n = 6;
	while
		(n != 1024)
	{
		n++;
		if (n % 3 == 0 || n % 5 == 0)
		{
			add += n;
		}
	}
	printf("%d\n", add);
	return (0);
}
