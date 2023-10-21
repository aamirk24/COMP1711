#include <stdio.h>
int main(){
    int a[5]={5,4,3,2,1};
    int b[5];
    int i,j;
    for (i=4;i>=0;i=i-1){
        for (j=0;j<=4;j++){
            b[j]=a[i];
        }
    }
    printf("Initial array:");
    for (i=0;i<5;i++){
        printf("%d",a[i]);
    }
    printf("Reversed Array:");
    for (i=0;i<5;i=i+1){
        printf("%d",b[i]);
    }
    return 0;
}