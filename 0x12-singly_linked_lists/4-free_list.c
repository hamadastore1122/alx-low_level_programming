#include "lists.h"
/**
 * free_list - free a list
 * @head: A pointer to the list head
 *
 */
void free_list(list_t *head)
{
list_t *temp;
while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
