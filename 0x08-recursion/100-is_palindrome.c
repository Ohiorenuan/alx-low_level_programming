#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string being evaluated
 * Return: 1 if its a palindrome
 */
int is_palindrome(char *s)
{
	int a, n;
	char *b;

	a = (_strlen_recursion(s) - 1) / 2;
	n = (_strlen_recursion(s)) - 1;
	b = s;
	return (comp(s, b + n, a));
}
/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string being evaluated
 * Return: The length of s
 */
int _strlen_recursion(char *s)
{
	if (s[0] != 0)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * comp - Does the work of is_palidrome
 * @s: The string being evaluated
 * @b: The same string as s
 * @a: Counter
 * Return: 1 if palidrome, 0 if not
 */
int comp(char *s, char *b, int a)
{
	if (s[0] != b[0])
		return (0);
	else if (s[0] == b[0] && a > 0)
	{
		a--;
		return (comp(s + 1, b - 1,  a));
	}

	else
		return (1);
}
