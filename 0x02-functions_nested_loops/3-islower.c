#include "main.h"

/**
 *_islower - a function that checks for a lowercase character
 *@c: A letter that is being tested
 * Return: this return  0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
