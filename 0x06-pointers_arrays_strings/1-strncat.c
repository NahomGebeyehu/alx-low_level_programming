#include "main.h"
#include <string.h>
/**
 * _strncat - This is a function that concatenates two strings
 * @src: string
 * @dest: string
 * @n: This is a number
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
