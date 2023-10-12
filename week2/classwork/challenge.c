#include <stdio.h>
int main(){
    int a,b,p;
    for (a=1;a<13;a++){
        for (b=1;b<13;b++){
            p=a*b;
            printf("%d x %d = %d \n",a,b,p);
        }
    }
    return 0;
}