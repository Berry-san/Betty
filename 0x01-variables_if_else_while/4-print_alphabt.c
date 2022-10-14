#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* followed by a new line, except q and e
* Return: Aways 0 (Sucess)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

