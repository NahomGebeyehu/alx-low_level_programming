#include "main.h"
#include <stdio.h>
/**
 * print_numbers - This prints numbers from 0 - 9
 * Return: return Void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
