#include "sort.h"
/**
 * insertion_sort_list - insert dll using insertion sort
 * @list: head node
*/
void insertion_sort_list(listint_t **list)
{
listint_t *curr, *previous, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

else
{
curr = (*list);
while (curr != NULL)
{
temp = curr->next;
previous = curr->prev;

while (previous != NULL && previous->n > curr->n)
{
curr->next = previous;
curr->prev = previous->prev;
previous->prev = curr;
previous->next = temp;

if (curr->prev != NULL)
{
curr->prev->next = curr;
}
if (temp != NULL)
{
temp->prev = previous;
}
if (curr->prev == NULL)
{
(*list) = curr;
}
print_list(*list);
previous = curr->prev;
temp = curr->next;
}
curr = temp;
}}}
