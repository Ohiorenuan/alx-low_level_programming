#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints the alphabet
 */
void print_alphabet(void)
{
	char alph;

	for
		(alph = 'a';
		 alph <= 'z';
		 alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
