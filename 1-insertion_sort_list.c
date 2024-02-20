#include "sort.h"

/**
 * insertion_sort_list - insertion sorting algorithm
 * @list: linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *temp;
    int n;

    if (!list || !*list)
        return;

    current = *list;

    while (current)
    {
        temp = current;
        while (temp->prev && temp->n < temp->prev->n)
        {
            n = temp->n;
            temp->n = temp->prev->n;
            temp->prev->n = n;
            temp = temp->prev;
            print_list(*list);
        }
        current = current->next;
    }
}


