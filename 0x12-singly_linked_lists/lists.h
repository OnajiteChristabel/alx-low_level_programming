<<<<<<< HEAD
#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *  * struct list_s - singly linked list
 *
 *   * @str: string - (malloc'ed string)
 *
 *    * @len: length of the string
 *
 *     * @next: points to the next node
 *
 *      *
 *
 *       * Description: singly linked list node structure
 *
 *        */

typedef struct list_s

{
	
	    char *str;
	    
	        unsigned int len;
		
		    struct list_s *next;
		    
} list_t;

=======
#ifndef LISTS_H
#define LISTS_H

#include <stdio.h> /* size_t, printf */
#include <stdlib.h> /* malloc */
#include <string.h> /* strdup */

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* function prototypes for all files */
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
