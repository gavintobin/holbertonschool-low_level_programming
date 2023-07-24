#include "lists.h"

/**
 * free_dlistint - main function
 * @head: var
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{

while (head)
{

free(head);

head = head->next;
}

}
