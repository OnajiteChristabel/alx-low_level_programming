#include "lists.h"
<<<<<<< HEAD
/**
 * free_list - frees a list
 * @head: head of the linked list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
=======

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
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
	}
}
