#include <stdio.h>
/**
 *main - some description about main
 *
 *Return: value 0
 */
int main(void)
{
	char d;


	for (d = 0; d < 26; ++d)
		putchar('a' + d);
	for (d = 0; d < 26; ++d)
		putchar('A' + d);

	putchar('\n');

	return (0);
}
