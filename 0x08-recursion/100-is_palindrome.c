#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - check if s is palindrome.
 * @l: left hand index
 * @r: right hand index
 * @p: possible palindrome
 *
 * Return: 1 if palindrome else return 0
 */
int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}
/**
 * is_palindrome - states if a string is a palindrome
 * @s: base address for string.
 *
 *  Return: 1 if palindrome, else return 0
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
