#include "main.h"
/**
 * swap_int - swaps the value of int a and int b
 * @a: first integer
 * @b: second integer
 * return 0
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
