#include <stdio.h>
#include <stdlib.h>


void main(){

    int number1=0, number2=0, answer=0;
    char opt=0;
    char moreCalcultations;

    printf("wecome to calculator APP\n");
    do {
        printf("Enter number 1: ");
        scanf("%d", &number1);
        
        printf("Enter number 2: ");
        scanf("%d", &number2);

        printf("select an operation : (+ , - , * , / ) : ");
        scanf("\n%c", &opt);

        printf("\nopt: char: %c, dec : %d \n", opt, opt);  

        switch (opt)
        {
        case '+' : answer = number1 + number2;
            break;
        
        case '-' : answer = number1 - number2;
            break;
        
        case '*' : answer = number1 * number2;
            break;
        
        case '/' : answer = number1 / number2;
            break;
        
        default: printf("invalid operation. Existing.\n");
            return; 
        }

        /*if (opt==1) {
            answer = number1 +number2;
        } else if (opt==2) {
            answer = number1 - number2;
        } else if (opt==3) {
            answer = number1 * number2;
        } else if (opt==4) {
            answer = number1 / number2;
        }else {
            printf("invalid operation. Existing. \n");
            return;
        }*/

        printf("Result : Operation # %d\n: %d\n", opt, answer);

        printf("Do another calculations (y/n)?");
        scanf("\n%c", &moreCalcultations);
    } while (moreCalcultations=='y');
}

