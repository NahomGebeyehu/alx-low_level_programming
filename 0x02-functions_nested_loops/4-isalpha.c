#include "main.h"
/**
 * _isalpha - This checks for a alphabetic character
 * @c: This is letter being tested
 * Return: This returns 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

