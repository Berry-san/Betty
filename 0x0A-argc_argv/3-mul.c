#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply 2 numbers
 * @argc: number of arguments passed to the functions
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */

int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
