#include <stdio.h>

int main () {

   /*char var1;
    printf("size of var1 : %ld\n", sizeof(var1)); // size of char (1 byte)

    char *var = "hi";
    printf("size of var %ld\n", sizeof(var));  // size of pointer (8 bytes on 64-bit systems)

    printf("var: %s\n", var); // print the string
    printf("size of Hi : %ld\n", sizeof("hi")); // size of string literal (3 bytes including null terminator)
    */ 
   int a[5] = {1, 2, 3, 4, 5};

   printf("size of a []: %ld\n", sizeof(a)); // size of the entire array (20 bytes if int is 4 bytes)
    return 0;
}