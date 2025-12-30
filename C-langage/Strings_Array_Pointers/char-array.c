#include <stdio.h>

int main () {

    char *str = "aydis";
    char z[] = {'h','z'}; // null-terminated character array
    char x[] = {'a', 'y','d','i','s'}; // null-terminated character array
    char y[] = {'h','z'}; // not null-terminated character array

    printf("str: %s\n", str); // print the string
    printf("x: %s\n", x); // print the string
    printf("y: %s\n", y); // print the string
    printf("z: %s\n", z); // print the string

    //printf("size of x: %ld\n", sizeof(x)); // size of the entire array (2 bytes)
    return 0;
}