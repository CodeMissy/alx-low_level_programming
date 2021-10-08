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
size_t count;
count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");

else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
