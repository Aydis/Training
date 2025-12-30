#include <stdio.h>

int main () {

   /*char var1;
    printf("size of var1 : %ld\n", sizeof(var1)); // size of char (1 byte)

    char *var = "hi";
    printf("size of var %ld\n", sizeof(var));  // size of pointer (8 bytes on 64-bit systems)

    printf("var: %s\n", var); // print the string
    printf("size of Hi : %ld\n", sizeof("hi")); // size of string literal (3 bytes including null terminator)
    */ 

    short int a_short [5]= {10, 20, 30, 40, 50};
    int a_int[5] = {1, 2, 3, 4, 5};

    //printf("size of a []: %ld\n", sizeof(a)); // size of the entire array (20 bytes if int is 4 bytes)git pu
    printf("sizeof(a_int):%ld\n", sizeof(a_short));
    printf("sizeof(a_short):%ld\n", sizeof(a_int)); // size of the entire array (10 bytes if short int is 2 bytes)
    return 0;
}