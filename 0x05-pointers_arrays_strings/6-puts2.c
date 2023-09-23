#include "main.h"
/**
 * puts2 - This function prints characters
 * @str: the string
 */
void puts2(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
		m++;
	}
	_putchar('\n');
}

