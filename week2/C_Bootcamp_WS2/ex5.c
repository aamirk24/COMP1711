#include <stdio.h>
int main(){
    int a[6]={2,34,24,34,1,2};
    int i,j,count=0;
    for (i=0;i<6;i++){
        count=0;
        for (j=0;j<6;j++){
            if (a[i]=a[j]){
                count=count+1;
            }
        }
        if (count>1){
            printf("%d occurs more than once in the array. \n",a[i]);
        }
    }
    return 0;
}