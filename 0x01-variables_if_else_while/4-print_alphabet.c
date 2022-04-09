#include <stdio.h>
/**
 * main - description
 *
 *Return: value 0
 */
int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; ++f)
	{
		if (f != 'e' && f != 'q')
			putchar(f);
	}

	putchar('\n');

	return (0);
}
