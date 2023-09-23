#include "main.h"
/**
 * _memcpy - This is the main function that copies memory area.
 * Return: This returns *dest
 * @n: This is the size
 * @src: This is pointer to char
 * @dest: This is pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
