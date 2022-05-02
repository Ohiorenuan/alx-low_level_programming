#include <stdio.h>
/**
 * main - Entry point of function
 * @argc: The count of arguments
 * @argv: Array of arguements
 * Return: The value 0
 */
int main(int argc, char *argv[])
{int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0); }
