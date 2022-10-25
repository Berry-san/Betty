#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the
 * program 101-crackme
*/

nt main(void)
{
	int i, j, k, s;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (s != 1024)
	{
		i = k = s = 0;
		while ((1024 - 100) > s)
		{
			j = rand() % 62;
			p[i] = c[j];
			s += c[j];
			i++;
		}
		while (c[k])
		{
			if (c[k] == (1024 - s))
			{
				p[i] = c[k];
				s += c[k];
				i++;
				break;
			}
			k++;
		}
	}
		
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
	
