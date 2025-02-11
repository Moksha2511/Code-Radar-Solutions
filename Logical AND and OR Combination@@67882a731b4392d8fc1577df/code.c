#include <stdio.h>
int main(){
    int a,b;
    if(scanf("%d %d" &a,&b)!=2){
        printf("Invalid inut\n");
        return 1;
    }
    if((a>0 && b<0)||(a==0 && b==0)?){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}
    