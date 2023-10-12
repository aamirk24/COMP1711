#include <stdio.h>
int main() {
    float l,b,ar;
    printf("Enter length of rectangle:");
    scanf("%f",&l);
    printf("Enter breadth of retangle:");
    scanf("%f",&b);
    ar=l*b;
    printf("Area of Rectangle: %f \n", ar);
    return 0;
}