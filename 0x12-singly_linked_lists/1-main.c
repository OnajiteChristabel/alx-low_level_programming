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

	        list_t *new;

		    list_t hello = {"World", 5, NULL};

		        size_t n;



			    head = &hello;

			        new = malloc(sizeof(list_t));

				    if (new == NULL)

					        {

							        printf("Error\n");

								        return (1);

									    }

				        new->str = strdup("Hello");

					    new->len = 5;

					        new->next = head;

						    head = new;

						        n = list_len(head);

							    printf("-> %lu elements\n", n);

							        free(new->str);

								    free(new);

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
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = list_len(head);
	printf("-> %lu elements\n", n);
	free(new->str);
	free(new);
	return (0);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
