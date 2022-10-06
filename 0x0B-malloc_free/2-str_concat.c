#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
* @s1: parameter
* @s2: parameter
* Return: char
*/
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, j, length, e;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	length = i + j + 1;
	arr = (char *) malloc(sizeof(char) * length);
	if (arr == NULL)
		return (NULL);
	for (e = 0; e < i; e++)
	{
		arr[e] = s1[e];
	}
	for (e = 0; e < j; e++)
	{
		arr[e + i] = s2[e];
	}
	return (arr);
}
