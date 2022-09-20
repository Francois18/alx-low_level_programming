#include "main.h"
#include <string.h>
/**
* print_rev - prints reverse s
* @s: parameter
*
* Return: void
*/
void print_rev(char *s)
{
	int lengthChar, letterPointer;

	lengthChar = strlen(s);
	for (letterPointer = lengthChar - 1; letterPointer >= 0; letterPointer--)
	{
		_putchar(s[letterPointer]);
	}
	_putchar('\n');
}
