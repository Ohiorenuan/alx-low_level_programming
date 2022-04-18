#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Character being evaluated
 *
 * Return: 1 for lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
