#include "main.h"
#include <string.h>

/**
 * _strcat - for concatination
 * @dest: destination char
 * @src: source char
 * Return: new char
 */

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
