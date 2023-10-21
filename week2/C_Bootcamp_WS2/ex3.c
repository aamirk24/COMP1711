#include <stdio.h>
int main(){
    int a[6]={12,23,3,11,234,123};
    int max,i;
    max=a[0];
    for (i=0;i<6;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    printf("Maximum element: %d \n",max);
    return 0;
}