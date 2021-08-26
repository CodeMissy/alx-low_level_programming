0) gcc -E $CFILE > c => this runs a C file through the preprocessor and saves the result into another file.

1) gcc -c $CFILE > $(echo $CFILE|cut -d"." -f1) => this compiles a C file, and doesnot link it, such that file name is saved in the variable $CFILE with the extension as .o instead of .c

2) gcc $CFILE -S > $(echo $CFILE|cut -d"." -f1).s => this generates the assembly code of a C code and saves it in an output file.

3) gcc $CFILE -o cisfun => this script compiles a C file and creates an executable file named cisfun .

4)
#include<stdio.h>
/**
 * main - main block
 * Return: 0
*/
int main()
{
puts("Programming is like building a multilingual puzzle\n");
return 0;
}

this code prints an output that says: Programming is like building a multilingual puzzle.

5)
#include<stdio.h>
/**                                                                 
* main - main block                                                 
* Return: 0                                                         
*/                                                                  
int main(void)                                                      
{                                                                   
printf("%s", "with proper grammar, but the outcome is a piece of art,,\n")
return (0);
}



6)
#include<stdio.h>
/**
* main - main block
* Return: 0
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}

7) gcc -masm=intel $CFILE -S > $(echo $CFILE|cut -d"." -f1).s => generates the assembly code (Intel syntax) of a C code and save it in an output file.