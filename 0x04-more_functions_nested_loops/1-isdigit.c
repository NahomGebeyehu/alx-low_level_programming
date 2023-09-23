#include "main.h"
/**
 * _isdigit - A function that checks for a digit
 * @c: represents an ASCII character
 * Return: returns 1 when digit and 0 when not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
