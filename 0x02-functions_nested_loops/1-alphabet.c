#include "main.h"
/**
 * print_alphabet - A function for printing  alphabets from a to z
 *
 * Return: returns 0
 */

void print_alphabet(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		_putchar (az);
		az++;
	}
	_putchar ('\n');

}
