#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a copy of str
* @str: parameter
* Return: char
*/
char *_strdup(char *str)
{
	unsigned int i, j;
	char *letter;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (*(str + j) != '\0')
	{
		j++;
	}

	letter = (char *) malloc(sizeof(char) * j + 1);
	if (letter == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		letter[i] = str[i];
	}
	return (letter);
}
