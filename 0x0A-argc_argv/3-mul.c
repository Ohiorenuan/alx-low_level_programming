#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of function
 * @argc: The count of arguments
 * @argv: Array of arguements
 * Return: The value 0
 */
int main(int argc, char *argv[])
{int mul, r;

	if (argc == 3)
	{mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		r = 0; }
	else
	{printf("%s\n", "Error");
		r = 1; }
	return (r); }
