#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list.
 * @head: Pointer to the start of the list
 * @number: The number to be inserted
 *
 * Return: Address of the new node or NULL if fail
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_int_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = number;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*Traverse the list to find the right postion to insert the new node*/
	current = *head;
	while (current->next != NULL && current->next->n < number)
	{
		current = current->next;
	}
	/*Insert the new node*/
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
