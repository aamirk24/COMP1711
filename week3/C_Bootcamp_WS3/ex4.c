#include <stdio.h>
int main(){
    int temp;
    printf("Enter temperature: ");
    scanf("%d",&temp);
    if (temp<40 && temp>-10){
        printf("The temperature is between -10 and 40.\n");
    }
    else{
        printf("The temperature is not between -10 and 40.\n");
    }
    return 0;
}