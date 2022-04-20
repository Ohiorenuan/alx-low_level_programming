#include "main.h"
/**
 * _atoi - Converts a string to a integer
 * @s: The string to be converted
 * Return: values depending on result
 */
int _atoi(char *s)
{
	int i, a, b, c;
	unsigned num;

	i = a = b = 0;
	num = 0;

	while (s[i])
	{
		if (s[i] > 47 && s[i] < 58)
		{
			c = 1;
			num = ((num * 10) + (s[i] - 48));
		}
		if (s[i] == '-' && c != 1)
		{
			a++;
		}
		if (s[i] == '+' && c != 1)
		{
			b++;
		}
		if (!(s[i] > 47 && s[i] < 58) && (c == 1))
		{
			break;
		}
		i++;
	}
	if ((a > b) && c == 1)
	{
		num = -num;
	}
	else if (c != 1)
	{
		num = 0;
	}
	return (num);
}
