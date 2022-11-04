#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	 printf("%s\n", argv[0]);
	 return (0);
}
