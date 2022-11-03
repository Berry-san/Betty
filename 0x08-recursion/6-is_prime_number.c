#include "main.h"
/**
 * prime_checker - checks to see if number is prime
 * @a:integer
 * @b: possible prime number
 *
 * Return: 1 if prime, else return 0
 */

int prime_checker(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (prime_checker(a + 1, b));
}

/**
 * is_prime_number - states if number is prime
 * @n: number to check
 * Return: 1 if prime, else return 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_checker(2, n));
}
