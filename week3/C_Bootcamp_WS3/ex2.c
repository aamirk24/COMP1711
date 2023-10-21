#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num%4==0 && num%5==0){
        printf("%d is divisible bt both 4 and 5.\n",num);
    }
    else if (num%4==0){
        printf("%d is divisible by 4.\n",num);
    }
    else if (num%5==0){
        printf("%d is divisible by 5.\n",num);
    }
    else{
        printf("%d is neither divisible by 4 nor 5.\n",num);
    }
    return 0;
}