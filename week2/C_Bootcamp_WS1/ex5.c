#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter Number 1: ");
    scanf("%d",&a);
    printf("Enter Number 2: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Number 1: %d \n",a);
    printf("Number 2: %d \n",b);
    return 0;
}