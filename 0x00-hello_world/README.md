0) gcc -E $CFILE > c => this runs a C file through the preprocessor and saves the result into another file.

1) gcc -c $CFILE > $(echo $CFILE|cut -d"." -f1) => this compiles a C file, and doesnot link it, such that file name is saved in the variable $CFILE with the extension as .o instead of .c

2) gcc $CFILE -S > $(echo $CFILE|cut -d"." -f1).s => this generates the assembly code of a C code and saves it in an output file.

3) gcc $CFILE -o cisfun => this script compiles a C file and creates an executable file named cisfum.