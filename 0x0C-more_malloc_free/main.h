#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory created
 * Return: A pointer to the new memory created
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - Concatenates two strings
 * @s1: One of the string to be concatenated
 * @s2: One of the string to be concatenated
 * @n: The size of the new string created
 * Return: Pointer to the new string, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: The number of elements
 * @size: The size of each element
 * Return: A pointer to the new memory created
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - Creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max);

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated
 * @old_size: The size in bytes of the allocated space for ptr
 * @new_size: The size in bytes of the new memory block
 * Return: A pointer to the new memory created
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
