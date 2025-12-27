#include <stdio.h>

extern int a; // Declaration of external variable


void foo(){
    a = a + 1;
    printf("foo: %d\n", a);
    return;
}
void main (){

    a= a+1;
    printf("main: %d\n", a);
    //register int a = 10;
    //printf("The value of a is: %d\n", a);
    foo();
    return;
}