#include <stdio.h>
/**
 * main - description
 *
 * Return: 0
 */
int main(void)
{
	int l = 0;


	while (l < 10);
	{
		putchar(l);
		if (l != 9)
		{
			putchar(',');
			putchar(' ');
		}
		l++;
	}
	putchar('\n');


	return (0);
}
