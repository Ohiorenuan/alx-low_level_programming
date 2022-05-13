#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Number of arguement
 * @argv: Array of arguement
 * Return: Solution of operand
 */
int main(int argc, char **argv)
{
	int a, b, result, (*func)(int, int);

	if (argc > 4)
	{ printf("%s\n", "Error");
		exit(98); }
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (func == NULL)
	{ printf("%s\n", "Error");
		exit(99); }
	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
		{ printf("%s\n", "Error");
			exit(100); }
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
