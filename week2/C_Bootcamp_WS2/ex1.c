#include <stdio.h>
int main() {
    int i,sum;
    sum=0;
    int ar[5]={5,23,13,4,12};
    for (i=0;i<5;i=i+1){
        sum=sum+ar[i];
    }
    printf("Sum of all elements of array: %d \n",sum);
    return 0;
}