#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/* checks if letter is uppercase */
int _isupper(int c);

/* checks if an integer is a digit */
int _isdigit(int c);

/* performs multiplication of two integers */
int mul(int a, int b);

/* prints numbers from 0 to 9 */
void print_numbers(void);

/* prints numbers from 0 to 9 without printing 2 & 4 */
void print_most_numbers(void);

/* prints numbers 0 to 9 ten times */
void more_numbers(void);

/* draws a straight line in the terminal */
void print_line(int n);

/* prints diagonal line in the terminal */
void print_diagonal(int n);

/* prints a square in the terminal */
void print_square(int size);

/* prints the FizzBuzz program */
int main(void);

/* prints a triangle in the program */
void print_triangle(int size);

#endif
