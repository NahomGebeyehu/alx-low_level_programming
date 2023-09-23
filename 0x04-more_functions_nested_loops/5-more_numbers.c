#include "main.h"
#include <stdio.h>
/**
 * more_numbers - This prints 0 - 14 ten times
 * Return: returns Void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
				_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
	}
}
