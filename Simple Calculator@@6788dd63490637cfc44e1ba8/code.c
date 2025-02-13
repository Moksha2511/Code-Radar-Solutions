#include<stdio.h>
int main(){
    int a,b;
    char operator;
    scanf("%d %d %c", &a,&b,&operator);
    switch(operator){
        case '+':
        printf("%d %d", a+b);
        break;
        case '-':
        printf("%d %d ", a-b);
        break;
        case '*':
        printf("%d %d", a*b);
        break;
        case '/':
        printf("%d %d", a/b);
        break;
        default:
        printf("Error");
    }
    return 0;
}