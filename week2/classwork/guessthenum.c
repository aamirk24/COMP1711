#include <stdio.h>
int main(){
    int a=0,b=14;
    while (a!=b){
        printf("Enter a number:");
        scanf("%d",&a);
        if (a>b){
            printf("too high \n");
        }
        else if (a<b){
            printf("too low \n");
        }
    }
    printf("Thats correct! \n");
    return 0;
}