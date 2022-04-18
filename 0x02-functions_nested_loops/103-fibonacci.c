#include <stdio.h>
/**
 * main - description
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c, add;


	a = 1;
	b = 2;
	add = 0;
	while
		(b < 4000000)
	{
		if (b % 2 == 0)
		{
			add += b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", add);
}
