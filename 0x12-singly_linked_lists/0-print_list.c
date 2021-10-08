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
  
h = temp = newnode;
if (!h)
printf("%d, %s", [0] (nil));

while (h != 0)
printf("%d", temp->data);
temp = temp->next;
count++;
}
