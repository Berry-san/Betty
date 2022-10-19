#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* a is the first integer
* b is the second integer
* c is the third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
