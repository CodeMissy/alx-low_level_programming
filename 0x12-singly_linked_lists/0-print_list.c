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
size_t nodes = 0;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%d] %s\n", h->len, h->str);

nodes++;
h = h->next;
}

return (nodes);
}
