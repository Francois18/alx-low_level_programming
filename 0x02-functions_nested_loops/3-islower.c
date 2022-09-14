#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase
 */
int _islower(int c)
{	
	int cases;

	cases = islower(c);		
	if (cases > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}	
}
