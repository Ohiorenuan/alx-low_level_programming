#include <stdio.h>
/**
 * main - description
 *
 * Return: 0
 */
int main(void)
{
	int count, a, b, c;


	count = 3;
	a = 1;
	b = 2;
	printf("%d, %d", a, b);
	while
		(count <= 50)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
}
