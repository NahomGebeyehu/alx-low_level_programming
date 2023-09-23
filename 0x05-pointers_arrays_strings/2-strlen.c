#include "main.h"
/**
 * _strlen - THis function calculates lenght of string
 * @s: the string
 * Return: value of string
 */
int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
