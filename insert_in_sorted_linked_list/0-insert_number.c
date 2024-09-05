#include "lists.h"
#include <stdlib.h>

/**
 * insert_node -  inserts a number into a sorted singly linked list.
 * @head: pointer to the head node pointer.
 * @number: integer value of the number to add to the list.
 * Return: The address of the new node, or NULL if insertion failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = NULL;
	listint_t *node = NULL;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = number;
	node->next = NULL;

	if (*head == NULL || (*head)->n >= number)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	current = *head;
	while (current->next != NULL && current->next->n < number)
	{
		current = current->next;
	}
	node->next = current->next;
	current->next = node;

	return (node);
}