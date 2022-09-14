#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: c is an ascii character
 *
 * Return: 1 (if letter)
 */

int _isalpha(int c)
{
	int response;

	response = isalpha(c);
	if (response > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
