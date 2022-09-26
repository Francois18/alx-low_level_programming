#include "main.h"
#include <string.h>
/**
* _memset - fills memory with constant byte
* @s: parameter
* @b: parameter
* @n: parameter
*
* Return: character
*/

char *_memset(char *s, char b, unsigned int n)
{
	s = memset(s, b, n);
	return (s);
}
