#include<stdio.h>
int main(){
    int a,b,result;
    char operator;
    scanf("%d %d %d %c", &a,&b,&reult,&operator);
    switch(operator){
        case '+':
        result=a+b;
        printf("%d\n", addition);
        break;
        case '-':
        result=a-b;
        printf("%d\n", substraction);
        break;
        case '*':
        result=a*b;
        printf("%d\n", multiplication);
        break;
        case '/':
        result=a/b;
        printf("%d\n", division);
        break;
        default:
        printf("Error");
    }
    return 0;
}