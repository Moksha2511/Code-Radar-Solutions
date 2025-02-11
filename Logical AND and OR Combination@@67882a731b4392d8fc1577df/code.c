#include <stdio.h>
int main(){
    int a,b;
    if(scanf("%d %d", &a,&b)!=2){
        printf((a>0 && b<0)||(a==0 && b==0)? "True\n":"False\n");
    }
    else{
        printf("True\n");
    }
    return 0;
}