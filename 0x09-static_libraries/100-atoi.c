#include "main.h"
/**
 * _atoi - Converts a string to a integer
 * @s: The string to be converted
 * Return: values depending on result
 */
int _atoi(char *s)
{
	int i, a, c;
	unsigned int num;

	i = 0;
	num = 0;
	a = 1;

	while (s[i])
	{
		if (s[i] > 47 && s[i] < 58)
		{
			c = 1;
			num = ((num * 10) + (s[i] - 48));
		}
		if (s[i] == '-' && c != 1)
		{
			a *= -1;
		}
		if (!(s[i] > 47 && s[i] < 58) && (c == 1))
		{
			break;
		}
		i++;
	}
	return (num * a);
}
