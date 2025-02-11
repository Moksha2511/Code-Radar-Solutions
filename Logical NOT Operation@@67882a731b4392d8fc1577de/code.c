#include <stdio.h>
int main(){
    int a;
    if(scanf("%d", &a)!=1){
        printf("Invalid input\n");
        return 1;
    }
    if(a<=0){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}