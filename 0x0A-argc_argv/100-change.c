#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of function
 * @argc: The count of arguments
 * @argv: Array of arguements
 * Return: The value 0
 */
int main(int argc, char *argv[])
{
	int r, cents, i, amount;
	int coin[5] = {25, 10, 5, 2, 1};

	r = cents = 0;
	amount = atoi(argv[1]);
	if (argc > 2)
	{ printf("%s\n", "Error");
		r = 1; }
	else
	{
		if (amount < 0)
			printf("%d\n", 0);
		else
		{
			for (i = 0; i < 6; i++)
			{
				if (amount >= coin[i])
				{ cents += amount / coin[i];
					amount = amount % coin[i]; } }
			printf("%d\n", cents); } }
	return (r); }
