#include "main.h"
/**
 * main - This is the main function
 *
 * Return: This returns 0
 */
int main(void)
{
	char put[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(put[c]);
	}
	_putchar('\n');
	return (0);
}
