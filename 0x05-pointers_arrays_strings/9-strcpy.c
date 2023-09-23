#include "main.h"
/**
 * *_strcpy - This function copies the string that is being pointed
 * @dest: This is a pointer
 * @src: This is another pointer
 * Return: This returns the pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	while (i <= length)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
