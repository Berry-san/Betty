#include <stdio.h>
#include "main.h"

/**
<<<<<<< HEAD
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* month: month in number format
* day: day of month
* year: year
* Return: void
=======
* largest_number - returns the largest of 3 numbers
* @a: is the first integer
* @b: is the second integer
* @c: is the third integer
* Return: largest number
>>>>>>> d1e6bf5c385b731e7136c2cdfcff6a3ade84a17b
*/

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || (year % 400 == 0 && year % 100 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
