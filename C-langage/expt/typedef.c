#include <stdio.h>

typedef unsigned char  aydis;

void main() {

    aydis a =10;
    int size = sizeof(a);

    printf("%d\n", size);
}