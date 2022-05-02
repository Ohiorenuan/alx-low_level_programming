#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of function
 * @argc: The count of arguments
 * @argv: Array of arguements
 * Return: The value 0
 */
int main(int argc, char *argv[])
{int sum, r, i;

	sum = r = 0;
	if (argc < 2)
		printf("%d\n", sum);
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{ sum += atoi(argv[i]);
			if (i == argc - 1)
				printf("%d\n", sum); }
		else
		{ printf("%s\n", "Error");
			r = 1;
			break; } }
	return (r); }
