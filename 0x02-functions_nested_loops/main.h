#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - Prints the alphabet in lowercase
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


#endif
