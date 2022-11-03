#include "lists.h"
<<<<<<< HEAD
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of a list
 * Return: the address of the node where the loop starts
=======

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p2;
	listint_t *prev;

	p2 = head;
	prev = head;
<<<<<<< HEAD

	p2 = head;
	prev = head;
=======
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
	while (head && p2 && p2->next)
	{
		head = head->next;
		p2 = p2->next->next;

		if (head == p2)
		{
			head = prev;
<<<<<<< HEAD
			prev = p2;
=======
			prev =  p2;
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
			while (1)
			{
				p2 = prev;
				while (p2->next != head && p2->next != prev)
				{
					p2 = p2->next;
				}
				if (p2->next == head)
					break;

				head = head->next;
			}
			return (p2->next);
		}
	}
<<<<<<< HEAD
=======

>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
	return (NULL);
}
