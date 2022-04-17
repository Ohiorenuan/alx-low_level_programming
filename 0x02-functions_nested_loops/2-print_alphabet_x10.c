#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

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
