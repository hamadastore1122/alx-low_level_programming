#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a singly linked list.
 * @head: pointe to the head of linked list.
 *
 * Here we will use recursion unlike in the previous task.
 * Make sure there is no momory leaks.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	/* go to the end of the list then start freeing from there */

	/* we have reached the end of the list */
	if (head == NULL) 
		return;
	/* free everything else */
	free_listint(head->next);
	/* then free head */
	free(head);
	/* elegante, eh? muy bien.*/
}
