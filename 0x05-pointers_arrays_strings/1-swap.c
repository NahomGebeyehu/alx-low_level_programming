#include "main.h"
/**
 * swap_int - This function swaps the values
 * @a: integer
 * @b: integer
 * Return: This returns 0
 */
void swap_int(int *a, int *b)
{
	int d;

	d = 0;
	d = *a;
	*a = *b;
	*b = d;
}
