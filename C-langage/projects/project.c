#include <stdio.h>
#include <stdlib.h>


void main(){

    int number1=0, number2=0, answer=0;
    int opt;

    printf("wecome to calculator APP\n");

    printf("Enter number 1: ");
    scanf("%d", &number1);
    
    printf("Enter number 2: ");
    scanf("%d", &number2);

    printf("select an operation : (1-> + , 2-> - , 3-> * , 4-> / ) : ");
    scanf("%d", &opt);

    if (opt==1) {
        answer = number1 +number2;
    } else if (opt==2) {
        answer = number1 - number2;
    } else if (opt==3) {
        answer = number1 * number2;
    } else if (opt==4) {
        answer = number1 / number2;
    }

    printf("Result : Operation # %d\n: %d\n", opt, answer);

}

