#include "main.h"
#include <string.h>
/**
* puts2 - prints character
* @str: parameter
*
* Return: void
*/

void puts2(char *str)
{
	int length, letterPointer;

	length = strlen(str);
	for (letterPointer = 0; letterPointer <= length - 1; letterPointer++)
	{
		if (letterPointer % 2 == 0)
			_putchar(str[letterPointer]);
	}
	_putchar('\n');
}
