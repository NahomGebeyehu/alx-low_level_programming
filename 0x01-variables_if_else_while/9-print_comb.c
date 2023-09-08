#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is the main function
 *
 * Return: This returns 0
 */
int main(void)
{
	int pc = 0;

	while (pc < 10)
	{
		putchar(48 + pc);
		if (pc != 9)
		{
			putchar(',');
			putchar(' ');
		}
		pc++;
	}
	putchar('\n');
	return (0);
}
