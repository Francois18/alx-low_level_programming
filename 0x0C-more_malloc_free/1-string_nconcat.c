#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - gets string length
 * @string: string
 * Return: length (int)
 */

int _strlen(char *string)
{
	int length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
* string_nconcat - concatenates two strings
* @s1: parameter
* @s2: parameter
* @n: parameter
* Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int length, lengths1, lengths2, i, j;

	lengths1 = _strlen(s1);
	lenghts2 = _strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (_strlen(s2) >= n)
		length = lengths1 + lengths2 + 1;
	else
	{
		length = lengths1 + n + 1;
		lengths2 = n;
	}
	str = malloc(length);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < lengths1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < lengths2)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
