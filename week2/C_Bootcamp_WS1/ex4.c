#include <stdio.h>
int main() {
    float r,ar;
    float pi=3.14;
    printf("Enter radius: ");
    scanf("%f",&r);
    ar=pi*r*r;
    printf("The area of a circle with radius = %.2f is : %.2f \n",r,ar);
    return 0;
}