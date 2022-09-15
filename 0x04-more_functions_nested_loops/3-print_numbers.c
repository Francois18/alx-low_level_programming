#include "main.h"
/**
* print_numbers - prints numbers
*
* Description: prints numbers 0 to 9
*
* Return: returns nothing.
*/
void _putchar(int);
void print_numbers(void)
{
	int num;

	num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
