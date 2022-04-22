#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - Prints out a character
 * @c: The character to be printed
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _strncat - appends a string to the dest string
 * @dest: The string being appended to
 * @src: The string being appended
 * Return: The pointer dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - appends a string to the dest string but only at most n bytes
 * @dest: The string being appended to
 * @src: The string being appended
 * @n: The number of bytes
 * Return: The pointer dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strcmp - Works like strcmp
 * @s1: First string
 * @s2: Second string
 * Return: An integer
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array to be reversed
 * @n: The number of elements in array n
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @a: The string to be modified
 * Return: The modified string
 */
char *string_toupper(char *a);

/**
 * cap_string - Capitalize all word using seperators
 * @a: The string to be modiefied
 * Return: The modified string
 */
char *cap_string(char *a);

/**
 * leet - Encodes a string into 1337
 * @a: The string to be modified
 * Return: The modified string
 */
char *leet(char *a);

/**
 * rot13 - Encodes a string using rot13
 * @a: The string to be modified
 * Return: The modified string
 */
char *rot13(char *a);

/**
 * print_number - Prints an integer
 * @n: The number to be printed
 */
void print_number(int n);

/**
 * infinite_add - Adds two numbers
 * @n1: First number to be added
 * @n2: Second number to be added
 * @r: Buffer where number is to be assigned
 * @size_r: Size of buffer r
 * Return: The buffer r
 */
char infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * print_buffer - Prints a buffer
 * @b: The buffer to be printed
 * @size: The size of the buffer
 */
void print_buffer(char *b, int size);

#endif
