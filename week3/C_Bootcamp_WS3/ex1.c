#include <stdio.h>
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    if (num==0){
        printf("Number is zero.\n");
    }
    else if (num<0){
        printf("Number is negative.\n");
    }
    else if (num>0){
        printf("Number is positive.\n");
    }
    return 0;
}
