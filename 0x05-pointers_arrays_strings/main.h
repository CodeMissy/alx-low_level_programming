#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/* takes a pointer to int and updates its value */
void reset_to_98(int *n);

/* swaps the value of two integers */
void swap_int(int *a, int *b);

/* checks the length of a string */
int _strlen(char *s);

/* prints a string to stdout */
void _puts(char *str);

/* prints a string in reverse */
void print_rev(char *s);

/* reverses a string */
void rev_string(char *s);

/* prints every other charachter of a string */
void puts2(char *str);

/* prints only half of a string */
void puts_half(char *str);

/* prints n element of an arrays of integers */
void print_array(int *a, int n);

#endif
