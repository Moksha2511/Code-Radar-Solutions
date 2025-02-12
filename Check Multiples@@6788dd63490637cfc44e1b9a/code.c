#include<stdio.h>
int main(){
    int num1,divisor;
    scanf("%d %d", &num1,&divisor);
    if(num1%divisor==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}