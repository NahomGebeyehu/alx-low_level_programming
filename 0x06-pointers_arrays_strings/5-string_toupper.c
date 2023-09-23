#include "main.h"
/**
 * string_toupper - This is a function that changes
 * all lowercase letters to upper
 * @n: Characters
 * Return: This returns n
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		n[i] = n[i] - 32;
	}
	return (n);
}
