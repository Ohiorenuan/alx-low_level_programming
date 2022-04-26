#ifndef MAIN_H
#define MAIN_H

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
 * print_chessboard - Prints the chess board
 * @a: The chessboard
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: The square matrix
 * @size: The number of rows or columns
 */
void print_diagsums(int *a, int size);

/**
 * set_string - sets the value of a pointer to a char
 * @s: The pointer to be changed
 * @to: The string
 */
void set_string(char **s, char *to);

/**
 * _count - Counts the number of items in a string
 * @s: The string to be counted
 * Return: The number of terms
 */
int _count(char *s)
{
	unsigned int num;

	num = 0;
	while (s[num])
		num++;
	return (num);
}

#endif
