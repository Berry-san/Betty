#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
*/

void puts_half(char *str)
{
	int string, n, m;

	string = strlen(str);
	if (string % 2 == 1)
		n = string / 2 + 1;
	else 
		n = (string / 2);
	for (m = n; m < string; m++)
		_putchar(str[m]);
	_putchar('\n');
}
