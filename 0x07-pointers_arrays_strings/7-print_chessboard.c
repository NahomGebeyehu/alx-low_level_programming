#include "main.h"
/**
 * print_chessboard - This prints chessboard
 * @a: This is a matrix
 * Return: This returns void
 */
void print_chessboard(char (*a)[8])
{
	int j = 0, k;

	while (j < 8)
	{
		k = 0;
		while (k < 8)
		{
			_putchar(*(*(j + a) + k));
			k++;
		}
		_putchar('\n');
		j++;
	}
}
