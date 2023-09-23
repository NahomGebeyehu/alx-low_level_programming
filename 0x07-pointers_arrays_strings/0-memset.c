#include "main.h"
/**
 * _memset - This is the function
 * @s: This is a pointer to char
 * @b: This is a data to change
 * @n: This is the index
 * Return: This is a return *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
