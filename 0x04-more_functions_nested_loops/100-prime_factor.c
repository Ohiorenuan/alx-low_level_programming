#include <stdio.h>
/**
 * main - entry point
 *
 * Return: value of 0
 */
int main(void)
{
	unsigned long num, a, b;

	num = 612852475143;
	a = 2;
	b = 0;
	while (num != 1)
	{
		if (num % a != 0)
		{
			a++;
		}
		else
		{
			if (b < a)
			{
				b = a;
			}
			num /= a;
			a = 2;
		}
	}
	printf("%lu\n", b);
}
