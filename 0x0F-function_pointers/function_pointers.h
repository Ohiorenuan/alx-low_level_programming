#ifndef __FUNCTIONS_POINTERS__
#define __FUNCTIONS_POINTERS__

#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_name - Prints a name
 * @name: The name to be printed
 * @f: A pointer to a function
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to be iterated
 * @size: The size of the array
 * @action: Pointer to the funtion to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - Searches for an integer
 * @array: The array being searched
 * @size: Number of elements in the array
 * @cmp: Pointer to the funtion used to compare values
 * Return: Index of the first element for which cmp does not return 0
 * or returns 1 if no element matches or size < 1
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif
