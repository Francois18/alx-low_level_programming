#include "main.h"
#include <string.h>
/**
* _strstr -  locates a substring
* @haystack: parameter
* @needle: parameter
*
* Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	haystack = strstr(haystack, needle);
	return (haystack);
}
