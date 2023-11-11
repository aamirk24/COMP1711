#include <stdio.h>

int main(){
    int arr[10];
    int i=0;
    float mean;
    int total=0;
    for (i=0;i<10;i++){
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
        total+=arr[i];
    }
    mean=total/10;

    for (i=0;i<10;i++){
        printf("%d \n",arr[i]);
    }
    printf("%f \n",mean);
    
    

}