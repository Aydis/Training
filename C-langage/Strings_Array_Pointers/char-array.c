#include <stdio.h>

int main () {

    /*char *str = "aydis";
    char z[] = {'h','z'}; // null-terminated character array
    char x[] = {'a', 'y','d','i','s'}; // null-terminated character array
    char y[] = {'h','z'}; // not null-terminated character array

    printf("str: %s\n", str); // print the string
    printf("x: %s\n", x); // print the string
    printf("y: %s\n", y); // print the string
    printf("z: %s\n", z); // print the string*/

    char abc = 'Z';
    char *ptr;
    ptr = &abc; // pointer to char variable

    char number[4];

    int *in_ptr;

    in_ptr= &number[0]; // pointer to char array

    //printf("adresse of in_ptr: %p\n", in_ptr);
    //printf("*in_ptr : %d\n", *in_ptr);

    *in_ptr = 0x48492100; // assign value to the first element of the array
    printf("*in_ptr after assignment: %c\n", *in_ptr);

    int i=0;

    while (i<4) {
        printf("number[%d]: %c\n", i, number[i]);
        i++;
    }
    {
        /* code */
    }
    

    /*printf("size of abc: %ld\n", sizeof(abc)); // size of the entire array (2 bytes)
    printf("size of ptr: %ld\n", sizeof(ptr)); // size of the entire array (8 bytes on 64-bit systems)  
    printf("adresse of abc: %p\n", &abc);
    printf("value of ptr: %p\n", ptr);
    printf("value pointed by ptr: %c\n", *ptr);
    printf("value of abc: %c\n", abc);  */
    return 0;
}