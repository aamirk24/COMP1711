#include <stdio.h>

float areaCircle(float r)
{
    float area;
    area=3.14*r*r;
    return area;
}

int main(){
    float rad;
    printf("Enter Radius: ");
    scanf("%f",&rad);
    printf("Area of a circle with a radius of %f : %f\n",rad,areaCircle(rad));
    return 0;
}