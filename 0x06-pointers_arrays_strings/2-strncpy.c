#include "main.h"
/**
 * _strncpy - This is a function that copies string
 * @dest: string
 * @src: string
 * @n: number
 * Return: This returns 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
