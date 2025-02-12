#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    Profit=a-b;
    Loss=b-a;
    if(a>0){
        printf("Profit");
    }
    else if(b>0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}