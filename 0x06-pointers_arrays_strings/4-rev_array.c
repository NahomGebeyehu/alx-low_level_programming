#include "main.h"
/**
 * reverse_array - This is a function that reverses an array
 * @a: array
 * @n: This is the number of element of array
 * Return: This returns void
 */
void reverse_array(int *a, int n)
{
	int j;
	int d;

	i = 0;

	while (j < n)
	{
		n--;
		d = a[j];
		a[j] = a[n];
		a[n] = d;
		j++;
	}
}
