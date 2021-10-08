#include "main.h"
#include <lists.h>
#include <string.h>

/**
 * print_list - prints all singly list element
 * list_t - singly list
 * @h: head of list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *temp = h;

while (temp != NULL)
{
if (temp->next == NULL)
printf("%d", temp->value);
}
else
{
printf("%d, ", temp->value);
}
temp = temp->next;
}
