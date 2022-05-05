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
 * create_array - Creates an array of chars, and initializes it
 * with a specific char
 * @size: The size of the array of chars
 * @c: The char
 * Return: A pointer to the created array and NULL if it fails
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - Creates a duplicate of a string
 * @str: The string to be duplicated from
 * Return: A pointer to the duplicate string and NULL if string is
 * NULL or if insufficient memory was availaible
 */
char *_strdup(char *str);

/**
 * str_concat - Concatenates two strings
 * @s1: One of the string to be concatenated
 * @s2: One of the string to be concatenated
 * Return: A pointer to the string containing the concentenated
 * string and NULL if it's an empty string or on failure
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - Returns a 2-dimensional array of integers initialized
 * to zero
 * @width: Number of columns
 * @height: Number of rows
 * Return: A pointer to the 2-dimensional array created and NULL if
 * width or height is zero or on failure
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - Frees a 2-dimensional grid previously created by your
 * alloc_grid function
 * @grid: The grid to be freed
 * @height: The number of rows
 */
void free_grid(int **grid, int height);

/**
 * argstostr - concentenates all the arguments of your program
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: A pointer to a new string containing the concententated
 * string with each arguement followed by a new line and NULL if it
 * fails
 */
char *argstostr(int ac, char **av);

/**
 * strtow - Splits a string into words
 * @str: The string to be splited
 * Return: A pointer to an array of strings(words), with each element
 * null-terminated. The last element of said array should by NULL.
 * NULL is returned if str is NULL. Words are seperated by spaces
 */
char **strtow(char *str);

#endif
