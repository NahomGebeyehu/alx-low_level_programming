#include "main.h"
/**
 * puts_half - This function prints half of a string
 * @str: This is the string
 */
void puts_half(char *str)
{
	int strings, i, n;

	for (strings = 0; str[strings] != '\0'; strings++)
	{
	}
	n = (strings - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
