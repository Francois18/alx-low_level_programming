#include "main.h"
#include <string.h>
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: parameter
* @accept: parameter
*
* Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	s = strpbrk(s, accept);
	return (s);
}
