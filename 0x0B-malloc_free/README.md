Malloc in it's full meaning is: memory allocation.
This is a procedure in which the size of a data stricture eg. an array is changed during runtime.

Malloc is a built in function that comes with the <stdlib.h> header.

When a datatype is not declared, malloc returns a void pointer simply because malloc has no idea about the datatype it is pointing to as it's only job is to allocate memory efficiently.

In malloc, the (sizeof(int)) funtion is used, normally ww know that an integer datatype holds a 4 bytes memory, but it is a bad practice to indicate number of bytes oneself because this can change from system to system, so it is efficient to use the (sizeof(int)) function.

The syntax of malloc looks like this:
(void*)malloc(size_t size)

size_t represents the number of elements, while size is the size of integer, replaced by the (sizeof(int)) function.