#include <stdio.h>



void main(){

    int variable1, variable2, answer;
    
    variable1 = 10;
    variable2 = 20;
    
    answer = variable1 + variable2;
    printf("%d\n", answer);

    answer = variable2 - variable1;
    printf("-%d\n", answer);

    answer = variable1 * variable2;
    printf("*%d\n", answer);

    answer = variable2 / variable1;
    printf("/%d\n", answer);

    answer = variable2 % variable1;
    printf("%%%d\n", answer);   
    //return 0;
}

