<<<<<<< HEAD
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list
 * @head: head of a list
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
=======

#include "lists.h"

/**
 * sum_listint - return sum of all data in linked list
 * @head: pointer to head pointer of linked list
 * Return: sum, or 0 if list is empty
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
<<<<<<< HEAD
=======

>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
	return (sum);
}
