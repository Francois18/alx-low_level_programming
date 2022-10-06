#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars
* @size: parameter
* @c: parameter
* Return: char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			*(array + i) = c;
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
