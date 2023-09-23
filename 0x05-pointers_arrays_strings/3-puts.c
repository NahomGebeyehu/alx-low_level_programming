#include "main.h"
/**
 * _puts - This function prints astring
 * @str: This is the string being printed
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
