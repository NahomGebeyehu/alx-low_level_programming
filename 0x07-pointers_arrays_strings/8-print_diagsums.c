#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - This is a functions that prints sums
 * @a: This is a pointer
 * @size: This is a size
 * Return: This returns void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, add1 = 0, add2 = 0;

	while (i < size)
	{
		add1 += *(a + (size * i + i));
		add2 += *(a + (size * i + size - 1 - i));
		i++;
	}
	printf("%d, ", add1);
	printf("%d\n", add2);
}

