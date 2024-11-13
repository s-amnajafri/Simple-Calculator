#include<stdio.h>
int main(void){
    float num1, num2;
    char operation;
    printf("Enter first number ");
    scanf("%f",&num1);
    printf("Enter second number ");
    scanf("%f",&num2);
    printf("Enter the operation you want to perform +, -, *,/: ");
    scanf(" %c",&operation);
    switch(operation){
        case '+':
        printf("%.2f + %.2f= %.2f",num1,num2,num1+num2);
        break;
        case '-':
        printf("%.2f - %.2f= %.2f",num1,num2,num1-num2);
        break;
        case '*':
        printf("%.2f + %.2f= %.2f",num1,num2,num1*num2);
        break;
        case '/':
        printf("%.2f + %.2f= %.2f",num1,num2,num1/num2);
        break;
    }
    return 0;
}
