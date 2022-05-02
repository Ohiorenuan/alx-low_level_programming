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
 * _islower - Checks for lowercase character
 * @c: Character being evaluated
 *
 * Return: 1 for lowercase and 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: Character being evaluated
 *
 * Return: 1 for letter and 0 otherwise
 */
int _isalpha(int c);

/**
 * _abs - computes the absolute value of an integer
 * @c: Character being evaluated
 *
 * Return: The absolute value of c
 */
int _abs(int c);

/**
 * _isupper - Checks for uppercase character
 * @c: Character being evaluated
 *
 * Return: 1 for uppercase and 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - Checks for digit
 * @c: Character being evaluated
 *
 * Return: 1 for digit and 0 otherwise
 */
int _isdigit(int c);

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
 * _strcpy - Copies strings pointed to by src
 * @dest: the pointer to dest
 * @src: string pointed to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - Converts a string to a integer
 * @s: The string to be converted
 * Return: values depending on result
 */
int _atoi(char *s);

/**
 * _strcat - appends a string to the dest string
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
 * _strncpy - Works like strncpy
 * @dest: String being appended to
 * @src: String being appended from
 * @n: The number of bytes being appended
 * Return: The modified string
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - Works like strcmp
 * @s1: First string
 * @s2: Second string
 * Return: An integer
 */
int _strcmp(char *s1, char *s2);

/**
 * _memset - Fills memory with a constant byte
 * @s: The buffer to be filled
 * @b: The constant byte
 * @n: The first n bytes of s to be filled
 * Return: A pointer to s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - Copies memory area
 * @dest: The buffer being copied to
 * @src: The buffer being copied from
 * @n: The number of bytes from src being copied
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The string being searched for
 * Return: A pointer to the first occurence of the string or NULL
 */
char *_strchr(char *s, char c);

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string being searched in
 * @accept: The string used to search
 * Return: The number of bytes which consists of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: The string being searched in
 * @accept: The string used to search
 * Return: A pointer to one of the bytes that matches in accept of NULL
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - Locates a substring
 * @haystack: The sring being searched in
 * @needle: The substring being searched for
 * Return: A pointer to the first occurence of needle
 */
char *_strstr(char *haystack, char *needle);

/**
 * _count - Counts the number of items in a string
 * @s: The string to be counted
 * Return: The number of terms
 */
int _count(char *s);

#endif
