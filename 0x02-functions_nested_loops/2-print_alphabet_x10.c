#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int count;
	char alph;

	count = 0;

	while
		(count < 10)
	{
		for
			(alph = 'a';
			 alph <= 'z';
			 alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
		count++;
	}
}
