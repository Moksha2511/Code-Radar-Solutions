#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        if(a==b && b==c){
            printf("Equilateral\n");
        }else if(a==b || b==c || c==a){
            printf("Isosceles");
        }else{
            printf("Scalene");
        }
    }
    else{
        printf("Not a Triangle");
    }
    return 0;
}