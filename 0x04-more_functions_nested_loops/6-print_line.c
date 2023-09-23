#include "main.h"
#include <stdio.h>

/**
 * print_line - This prints a line
 * @n : The number of '_' characters
 * Return: returns Void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
