#include<stdio.h>
int main(){
    int a,b,result;
    char operator;
    scanf("%d %d %c", &a,&b,&operator);
    switch(operator){
        case '+':
        result=a+b;
        printf("addition\n");
        break;
        case '-':
        result=a-b;
        printf("subtraction\n");
        break;
        case '*':
        result=a*b;
        printf("multiplication\n");
        break;
        case '/':
        result=a/b==0;
        printf("division\n");
        break;
        default:
        printf("Error");
    }
    return 0;
}