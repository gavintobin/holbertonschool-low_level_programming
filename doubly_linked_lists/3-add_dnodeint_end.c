#include "lists.h"

/**
 * add_dnodeint_end - main function
 * @head: var
 * @n: var
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *temp = *head;

if (new == NULL)
{
return (NULL);
}

if (*head == NULL)
{

new->n = n;
new->prev = NULL;
new->next = NULL;
*head = new;
return (new);
}

while (temp->next != NULL)
{
temp = temp->next;
}

new->n = n;
new->prev = temp;
new->next = NULL;
temp->next = new;

return (new);
}
