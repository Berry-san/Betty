#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: char to check
*/

void puts2(char *str)
{
	int string;

	for (string = 0; str[str] != '\0'; str++)
	if (string % 2 == 0)
		_putchar(str[str]);
	_putchar('\n');
}
