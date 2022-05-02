#include "main.h"

/**
 * _isalpha - Checks for lowercase character
 * @c: Character being evaluated
 *
 * Return: 1 for lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
