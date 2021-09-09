#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/* this function contactenates two strings */
char *_strcat(char *dest, char *src);

/* contactenates while using n bytes from src */
char *_strncat(char *dest, char *src, int n);

/* copies a string */
char *_strncpy(char *dest, char *src, int n);

/* compares two strings */
int _strcmp(char *s1, char *s2);

/* reverses the content of an array of integers */
void reverse_array(int *a, int n);

/* changes all lowercase string to uppercase */
char *string_toupper(char *);

/* Capitalizes all the words of a string */
char *cap_string(char *);

/* encodes a string into 1337 */
char *leet(char *);

#endif
