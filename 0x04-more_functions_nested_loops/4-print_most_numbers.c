#include "main.h"
/**
* print_most_numbers - prints most numbers
*
* Description: prints most numbers
*
* Return: returns nothing
*/

void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
