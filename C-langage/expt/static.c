#include <stdio.h>


extern int a; // Declaration of external variable
void foo();

void bar() {
    static char b=3;
    b=b+1;

    printf("bar: %d\n", b);
}

void main (){

    a= a+1;
    printf("main: %d\n", a);
    //register int a = 10;
    //printf("The value of a is: %d\n", a);
    foo();
    bar();
    return;
}