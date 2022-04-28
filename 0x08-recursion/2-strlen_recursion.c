#include "main.h"
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
