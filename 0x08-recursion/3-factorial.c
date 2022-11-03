#include "main.h"
/**
 * factorial - returns factorial of  given number
 * @n: integer to take factorial of
 *
 * Return: factorial of n, or -1 if n < 0
 */

int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);

}
