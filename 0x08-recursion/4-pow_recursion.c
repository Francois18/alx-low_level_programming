#include "main.h"
#include <manth.h>

/**
 * _pow_recursion - value x raised to the power of y
 *@x: parameter
 *@y: parameter
 *
 *
 *Return int 
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	pow(x, y);
	return (0);
}
