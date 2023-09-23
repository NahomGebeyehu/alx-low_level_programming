#include "main.h"
/**
 * rev_string - This is the function that reverses a string
 * @s: This is the reversed string
 * Returns: void
 */
void rev_string(char *s)
{
	int length j, i;
	char c1, c2;

	while (s[length] != '\0')
	{
		length++;
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		c1 = s[i];
		c2 = s[j];
		s[i] = c2;
		s[j] = c1;
		j--;
		i++;
	}
}
