#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar followed by new line
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(word[i]);
	}

	_putchar('\n');
	return (0);
}
