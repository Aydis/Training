#include <stdio.h>

struct pixel_t

{
    unsigned char r;
    unsigned char g;
    unsigned char b;
};
 unsigned char  aydis;

void main() {

    struct pixel_t p;

    printf("%ld\n", sizeof(p));
    
}