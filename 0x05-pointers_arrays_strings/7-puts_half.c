#include "main.h"
#include <string.h>
/**
* puts_half - prints reverse s
* @str: parameter
*
* Return: void
*/
void puts_half(char *str)
{
	int lengthChar, letter, num;

	lengthChar = strlen(str);
	num = (lengthChar - 1) / 2;
	if (lengthChar % 2 != 0)
		for (letter = num; letter < lengthChar; letter++)
			_putchar(str[letter]);
	else
		for (letter = lengthChar / 2; letter < lengthChar; letter++)
			_putchar(str[letter]);
	_putchar('\n');
}
