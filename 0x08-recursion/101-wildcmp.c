#include "main.h"
/**
 * wildcmp - Compares two strings
 * @s1: One of the string being evaluated
 * @s2: One of the string being evaluated
 * Return: 1 if they are considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));
	else if (s1[0] == '*')
		return (wildcmp(mov1(s1), mov2(s2, (mov1(s1))[0])));
	else if (s2[0] == '*')
		return (wildcmp(mov1(s2), mov2(s1, (mov1(s2))[0])));
	else if (s1[0] == '\0' || s2[0] == '\0')
		return (1);
	else
		return (0);

}
/**
 * mov1 - Moves the imaginary cursor to a non '*' character
 * @s: The string being modified
 * Return: The new string position
 */
char *mov1(char *s)
{
	if (s[0] == '*')
		return (mov1(s + 1));
	else
		return (s);
}
/**
 * mov2 - Moves the imaginary cursor to the next apperance of character
 * @s: The string being modified
 * @a: The character being searched for
 * Return: The modified string
 */
char *mov2(char *s, char a)
{
	if (s[0] != a)
		return (mov2(s + 1, a));
	else
		return (s);
}
