#include "main.h"
#include <string.h>
/**
* _strchr - locates a character in a string
* @s: parameter
* @c: parameter
*
* Return: char
*/

char *_strchr(char *s, char c)
{
	s = strchr(s, c);
	return (s);
}
