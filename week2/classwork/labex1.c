#include <stdio.h>
int main() {
    float a,b,sum;
    printf("Enter number 1:");
    scanf("%f",&a);
    printf("Enter number 2:");
    scanf("%f",&b);
    sum=a+b;
    printf("%.2f + %.2f = %.2f \n",a,b,sum);
    return 0;
}