#include <stdio.h>
/**
 * main - Entry point of function
 * @argc: The count of arguments
 * @argv: Array of arguements
 * Return: The value 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
