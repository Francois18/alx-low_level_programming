#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum
* @a: parameter
* @size: parameter
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, x;

	sum1 = 0;
	sum2 = 0;
	x = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
	}
	for (i = size; i >= 0; i--)
	{
		sum2 += a[x][i];
		x++;
	}
	printf("%d, %d", sum1, sum2);
}
