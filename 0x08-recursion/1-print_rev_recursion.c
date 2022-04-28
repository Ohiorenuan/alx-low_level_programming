#include "main.h"
/**
 * _puts_rev_recursion - Prints a string in reverse
 * @s: The string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
