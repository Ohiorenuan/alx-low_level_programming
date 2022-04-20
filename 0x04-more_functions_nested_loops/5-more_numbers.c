#include "main.h"
/**
 * more_numbers - Prints the numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int count, num, n;

	count = 0;
	num = 9;

	while (count < 2)
	{
		if (count == 1)
		{
			num = 4;
		}
		for (n = 0;
		     n <= num;
		     n++)
		{
			if (count == 1)
			{
				_putchar(1 + '0');
			}
			_putchar(n + '0');
		}
		count++;
	}
	_putchar('\n');
}
