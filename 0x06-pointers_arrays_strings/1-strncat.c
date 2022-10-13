#include "main.h"
#include <string.h>
/**
* _strncat - concaternates two string
* @dest: parameter
* @src: parameter
* @n: parameter
* Return: returns character
*/

char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}
