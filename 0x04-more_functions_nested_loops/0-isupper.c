#include "main.h"
#include <ctype.h>
/**
* _isupper - checks for uppercase character
* @c: c is a parameter
*
* Return: 1 (if uppercase) else 0
*/

int _isupper(int c)
{
	int isUpper;

	isUpper = isupper(c);
	if (isUpper > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
