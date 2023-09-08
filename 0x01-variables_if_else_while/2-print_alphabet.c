#include <stdio.h>
#include <stdlib.h>
/**
 * main - initial point
 *
 * Return: 0 return
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
