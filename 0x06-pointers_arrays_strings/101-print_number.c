#include "main.h"
/**
 * print_number - prints integer with putchar
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x *= -1;
		_putchar('-');
	}

	x = n;


	if (x / 10)
		print_number(x / 10);

	_putchar((x % 10) + '0');
}
