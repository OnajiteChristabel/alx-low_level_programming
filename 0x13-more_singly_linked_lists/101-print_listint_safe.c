#include "lists.h"
<<<<<<< HEAD
/**
 * free_listp - frees a linked list
 * @head: head of a list
 * Return: no return
=======

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
<<<<<<< HEAD
 * print_listint_safe - prints a linked list
 * @head: head of a list
 * Return: number of nodes in the list
=======
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}
<<<<<<< HEAD
=======

>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
<<<<<<< HEAD
=======

>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
	free_listp(&hptr);
	return (nnodes);
}
