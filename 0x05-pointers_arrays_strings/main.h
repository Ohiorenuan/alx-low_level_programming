#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - It prints out a single character
 * @c: The character to be printed
 *
 * Return: The character c
 */
int _putchar(char c);

/**
 * reset_to_98 - Takes a pointer to an int and updates the value
 * @n: Pointer to be updated
 */
void reset_to_98(int *n);

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to be swapped
 * @b: Pointer to be swapped
 */
void swap_int(int *a, int *b);

/**
 * _strlen - Returns the length of a string
 * @s: String to be evaulated
 * Return: The length of the s
 */
int _strlen(char *s);

/**
 * _puts - Prints a string to standard output
 * @str: String to be printed
 */
void _puts(char *str);

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be reversed
 */
void print_rev(char *s);

#include "main.h"
/**
 * rev_string - Prints a string in reverse
 * @s: The string to be reversed
 */
void rev_string(char *s);

/**
 * puts2 - Prints every other character of a string
 * @str: String to be changed
 */
void puts2(char *str);

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array to be printed
 * @n: Number of elements in a
 */
void print_array(int *a, int n);

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 */
void puts_half(char *str);

/**
 * _atoi - Converts a string to a integer
 * @s: The string to be converted
 * Return: values depending on result
 */
int _atoi(char *s);

/**
 * _strcpy - Copies strings pointed to by src
 * @dest: the pointer to dest
 * @src: string pointed to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src);

#endif
