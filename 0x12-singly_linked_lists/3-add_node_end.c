#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: a pointer to the structure list_t
 * @str: the input string into the node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int size = 0;
	list_t *newstr;
	list_t *start = *head;

	while (str[size])
		size++;
	newstr = malloc(sizeof(list_t));
	if (newstr == NULL)
		return (NULL);
	newstr->str = strdup(str);
	newstr->len = size;
	newstr->next = NULL;
	if (*head == NULL)
	{
		*head = newstr;
		return (newstr);
	}
	while (start->next)
	{
		start = start->next;
	}
	start->next = newstr;
	return (newstr);
}
