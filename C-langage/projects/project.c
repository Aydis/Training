#include <stdio.h>
#include <stdlib.h>


void main(){

    float number1=0, number2=0, answer=0;
    char opt=0;
    char moreCalcultations;
    int invalid=0;

    printf("wecome to calculator APP\n");
    do {
        printf("Enter first number: ");
        scanf("%f", &number1);
        
        printf("Enter second number 2: ");
        scanf("%f", &number2);

        do {

            printf("select an operation : (+ , - , * , / ) : ");
            scanf("\n%c", &opt);

            invalid=0;
    
            switch (opt)
            {
            case '+' : 
                answer = number1 + number2;
                break;
            
            case '-' : 
                answer = number1 - number2;
                break;
            
            case '*' : 
                answer = number1 * number2;
                break;
            
            case '/' : 
                answer = number1 / number2;
                break;
            
            default: printf("invalid operation. Existing.\n");
                invalid=1;
            }
    }       while (invalid ==1);

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

        printf("Result : Operation # %c\n: %f\n", opt, answer);

        printf("Do another calculations (y/n)?");
        scanf("\n%c", &moreCalcultations);
    } while (moreCalcultations=='y');

    printf("Thanks for using our calculator program. Goodbye!\n");
}

