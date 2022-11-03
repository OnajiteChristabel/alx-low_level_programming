#include <stdlib.h>
<<<<<<< HEAD

#include <string.h>

#include <stdio.h>

#include "lists.h"



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    list_t *head;



	        head = NULL;

		    add_node_end(&head, "Bob");

		        add_node_end(&head, "&");

			    add_node_end(&head, "Kris");

			        add_node_end(&head, "love");

				    add_node_end(&head, "asm");

				        print_list(head);

					    free_list(head);

					        head = NULL;

						    return (0);

=======
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Jennie");
	add_node_end(&head, "&");
	add_node_end(&head, "Jay");
	add_node_end(&head, "love");
	add_node_end(&head, "asm");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
