#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/* fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* writes a function thsy copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* writes a function that locates a character in string */
char *_strchr(char *s, char c);

/* gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/* locates a substring */
char *_strstr(char *haystack, char *needle);

/* prints the chessboard */
void print_chessboard(char (*a)[8]);

/* prints the sum of two diagonals of a square matrix of integers */
void print_diagsums(int *a, int size);

/* sets the value of a pointer to char */
void set_string(char **s, char *to);

#endif
