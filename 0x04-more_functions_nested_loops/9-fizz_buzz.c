#include <stdio.h>
#include "main.h"

/**
* main - prints the number from 1 - 100, followed by a new line
* Fizz for multiples of 3, Buzz for multiples of 5,
* and FizzBuzz for multiples of both
* Return: always 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
