#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the list_t
 * @str: the input size to the node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int size = 0;
	list_t *newstr;

	while (str[size])
	{
		size++;
	}
	newstr = malloc(sizeof(list_t));
	if (newstr == NULL)
		return (NULL);
	newstr->str = strdup(str);
	newstr->len = size;
	newstr->next = (*head);
	(*head) = newstr;
	return (*head);
}
