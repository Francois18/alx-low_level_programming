#include "main.h"
#include <ctype.h>
/**
* _isdigit - checks if c is a digit
* @c: is a parameter
*
* Return: 1 or 0 depending on c
*/

int _isdigit(int c)
{
	int isDigit;

	isDigit = isdigit(c);
	if (isDigit > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
