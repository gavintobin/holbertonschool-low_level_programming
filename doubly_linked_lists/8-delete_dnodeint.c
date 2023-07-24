#include "lists.h"

/**
 * delete_dnodeint_at_index - main function
 * @head: var
 * @index: var
 * Return: dlistint_t
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head, *temp1, *temp2;
unsigned int counter = 0;
while (temp && counter < index)
{
if (temp == NULL)
{
return (-1);
}
else
{
counter++;
temp = temp->next;
}
}
if (temp == NULL)
{
return (-1);
}
if (*head == temp)
{
*head = temp->next;
}
if (temp->next != NULL)
{
temp->next->prev = temp->prev;
}
if (temp->prev != NULL)
{
temp->prev->next = temp->next;
}
temp1 = temp->prev;
temp2 = temp->next;
temp->prev = temp1;
temp->next = temp2;
free(temp);
return (1);

}
