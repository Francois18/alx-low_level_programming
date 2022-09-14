#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Description: Prints the alphabet
 *
 * Return: returns nothing.
 */

void print_alphabet(void)
{

	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}

	_putchar('\n');
}
