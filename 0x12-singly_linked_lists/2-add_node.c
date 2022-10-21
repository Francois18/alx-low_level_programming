#include "lists.h"

/**
 * _strlen - returns length of string
 * @s: string paramter
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 *add_node - adds a new node
 *@head: head of link lists
 *@str: string to be used as datre for node
 * Return: return elemenet
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *string;
	int length;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		string = NULL;
		length = 0;
	}
	else
	{
		string = strdup(str);
		length = _strlen(str);
	}
	new->len = length;
	new->str = string;
	new->next = *head;
	*head = new;

	return (*head);
}
