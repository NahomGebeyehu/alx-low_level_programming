#include "main.h"
/**
 * _strspn - This is a function that gets length
 * @s: This is a string
 * @accept: This is a substring of accepted chars
 * Return: This returns length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	char *a = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				l++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = a;
	}
	return (l);
}
