#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @c: the specific character
 * @size: size of array
 * Return: NULL if size = 0, ptr or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *i;
unsigned int b;

if (size == 0)
return (NULL);

i = malloc(size * sizeof(*i));
if (i == NULL)
return (NULL);

for (b = 0; b < size; b++)
i[b] = c;
return (i);
}
