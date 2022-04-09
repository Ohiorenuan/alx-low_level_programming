#include <stdio.h>
/**
 * main - description
 *
 * Return: 0
 */
int main(void)
{
	char h;


	for (h = '0'; h <= '9'; ++h)
		putchar(h);
	for (h = 'a'; h <= 'z'; ++h)
		putchar(h);
	putchar('\n');

	return (0);
}
