#include "main.h"
/**
 * print_rev - This function prints a string in reverse
 * @s: This is the string
 */
void print_rev(char *s)
{
	int i = 0;
	int strings = 0;

	while (s[strings] != '\0')
	{
		strings++;
	}

	i = strings - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
