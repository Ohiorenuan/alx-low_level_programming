#include "main.h"
/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number being evaluated
 * Return: 1 if its prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_func(n, 2));
}
/**
 * is_func - Does the job of is_prime_number
 * @n: The number to be evaluated
 * @a: Counter
 * Return: 1 if prime, 0 if not
 */
int is_func(int n, int a)
{
	if (a < n && (n % a) != 0)
		return (is_func(n, a + 1));
	else if (a == n)
		return (1);
	else
		return (0);
}
