#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c", &ch);
    ch=toupper(ch);
    switch(ch){
        case'R':
        printf("Stop");
        break;
        case'G':
        printf("Go");
        break;
        case'Y':
        printf("Slow Down");
        break;
        default:
        printf("INvalid input");
        break;
    }
    return 0;
}