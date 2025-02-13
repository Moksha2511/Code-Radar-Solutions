#include<stdio.h>
int main(){
    char operator;
    int a,b;
    scanf("%d %d %c", &a,&b,&operator);
    switch(operator){
        case '+':
        printf("%d + %d = %d", a,b,a+b);
        break;
        case '-':
        printf("%d - %d = %d ",a,b,a-b);
        break;
        case '*':
        printf("%d * %d = %d",a,b,a*b);
        break;
        case '/':
        printf("%d / %d = %d",a,b,a/b);
        break;
        default:
        printf("Invalid input");
    }
    return 0;
}