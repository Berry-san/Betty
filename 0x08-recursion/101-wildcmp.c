#include "main.h"
/**
 * str_checker - check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @i: first spot that was checked
 * @j: first spot in wildcard comparison
 *
 * Return: spot that matches or NULL
 */

int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcard - checks for the wildcards
 * @s3: base address for string.
 * @s4: base address for string.
 *
 * Return: pointer to spot in s3 that matches s4
 */
int wildcmp(char *s3, char *s4)
{
	return (str_checker(s3, s4, 0, 0));
}
