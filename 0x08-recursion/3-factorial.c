#include "main.h"
/**
* factorial - returns factorial
* @n: parameter
*
* Return: int
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	n = n * factorial(n - 1);
		return (n);
}
