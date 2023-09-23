#include "main.h"
#include <stdio.h>
/**
 * print_array - This function prints an array
 * @a: This is an array
 * @n: This is the length of the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
		printf("\n");
}
