#include <stdio.h>
/**
 *main - description for main
 *
 *Return: value 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 26; ++c)
		putchar('a' + c);

	putchar('\n');

	return (0);
}
