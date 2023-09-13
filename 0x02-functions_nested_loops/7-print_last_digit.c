#include "main.h"

/**
 * print_last_digit - This function prints the last digit of a number.
 * @i: the int
 * Return: This returns the value of the last digit
 */
int print_last_digit(int i)
{
	int a;

	if (i < 0)
		i = -i;
	a = i % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}

