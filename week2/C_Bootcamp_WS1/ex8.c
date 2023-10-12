#include <stdio.h>
int main() {
    int a,p,i;
    printf("Enter a number: ");
    scanf("%d",&a);
    p=1;
    for (i=1; i<=a; ++i){
        p=p*i;
    }
    printf("Factorial of %d is %d \n",a,p);
    return 0;
}