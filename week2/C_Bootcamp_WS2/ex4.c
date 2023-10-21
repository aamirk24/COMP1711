#include <stdio.h>
int main(){
    int a[5]={2,4,6,8,10};
    int i, b[5];
    for (i=1;i<5;i++){
        b[i]=a[i-1];
    }
    b[0]=a[4];
    printf("Initial array: \n");
    for (i=0;i<5;i++){
        printf("%d \n",a[i]);
    }
    printf("Final array: \n");
    for (i=0;i<5;i++){
        printf("%d \n",b[i]);
    }
    return 0;
}