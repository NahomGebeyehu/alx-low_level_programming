#include "main.h"
/**
 * _strchr - This is a function that locates a char in a string
 * Return: This returns *s
 * @s: This is a pinter
 * @c: This is a char
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
