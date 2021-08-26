0) gcc -E $CFILE > c => this runs a C file through the preprocessor and saves the result into another file.

1) gcc -E $CFILE -o c => this compiles a C file, and doesnot link it, such that file name is saved in the variable $CFILE with the extension as .o instead of .c