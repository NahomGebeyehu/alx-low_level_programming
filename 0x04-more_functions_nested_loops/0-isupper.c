#include "main.h"
#include <stdio.h>

/**
 * _isupper - This function checks if c is an uppercase letter or not
 * @c: represents an ASCII character
 * Return: returns 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
