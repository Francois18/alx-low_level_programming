#include "main.h"
#include <string.h>
/**
* _strspn - length of a prefix substring
* @s: parameter
* @accept: parameter
*
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	size_t i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
