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

	    listint_t *head;

	        listint_t *new;

		    listint_t hello = {8, NULL};

		        size_t n;



			    head = &hello;

			        new = malloc(sizeof(listint_t));

				    if (new == NULL)

					        {

							        printf("Error\n");

								        return (1);

									    }

				        new->n = 9;

					    new->next = head;

					        head = new;

						    n = print_listint(head);

						        printf("-> %lu elements\n", n);

							    free(new);

							        return (0);

=======
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code
 *   * 
 *    * Return: Always 0.
 *     */
int main(void)
{
	    listint_t *head;
	        listint_t *new;
		    listint_t hello = {8, NULL};
		        size_t n;

			    head = &hello;
			        new = malloc(sizeof(listint_t));
				    if (new == NULL)
					        {
							        printf("Error\n");
								        return (1);
									    }
				        new->n = 9;
					    new->next = head;
					        head = new;
						    n = print_listint(head);
						        printf("-> %lu elements\n", n);
							    free(new);
							        return (0);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
