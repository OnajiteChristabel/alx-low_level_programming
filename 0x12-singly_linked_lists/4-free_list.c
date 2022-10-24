#include "lists.h"

/**
 * free_list - free linked list
 * @head: linked list
 * free
 */

void free_list(list_t *head) /* freeeehgd*/
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
