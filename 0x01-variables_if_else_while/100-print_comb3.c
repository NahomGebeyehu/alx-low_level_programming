#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit;  /* First digit */
	int second_digit; /* Second digit */

    /* Loop from 0 to 9 for the first digit */
	for (first_digit = 0; first_digit < 10; first_digit++)
	{
	/* Loop from first_digit + 1 to 9 for the second digit */
		for (second_digit = first_digit + 1; second_digit < 10; second_digit++)
			{	
			    /* Print the first digit as a character */
			    putchar(first_digit + '0');
			    /* Print the second digit as a character */
			    putchar(second_digit + '0');
			    /* If the combination is not 89, print a comma and a space */
			if (first_digit != 8 || second_digit != 9)
			    {
				putchar(',');
				putchar(' ');
			    }
        }
    }
    /* Print a newline at the end */
    putchar('\n');
    return (0);
}
