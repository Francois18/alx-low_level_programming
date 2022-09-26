#include "main.h"
#include <string.h>
/**
* _memcpy - copies memory area
* @dest: parameter
* @src: parameter
* @n: parameter
*
* Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	dest = memcpy(dest, src, n);
	return (dest);
}
