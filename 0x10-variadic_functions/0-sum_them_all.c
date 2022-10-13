#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sum of all its parameters
* @n: number of parameters
* Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
