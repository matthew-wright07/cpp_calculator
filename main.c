#include <stdio.h>

int main(){
    int num1;
    int num2;
    char operator;

    printf("First number: ");
    scanf(" %d",&num1);
    printf("Second number: ");
    scanf(" %d",&num2);
    printf("Operator (+ or - or * or /): ");
    scanf(" %c",&operator);

    if (operator=='+'){
        printf("The answer is: %d",num1+num2);
    }else if (operator=='-'){
        printf("The answer is: %d",num1-num2);
    }else if (operator=='*'){
        printf("The answer is: %d",num1*num2);
    }else if (operator=='/'){
        printf("The answer is: %d",num1/num2);
    }else{
        printf("Wrong input");
    }
}