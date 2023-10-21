#include <stdio.h>

float VolSphere(float r)
{
    float volume;
    volume=(4/3)*(3.14*(r*r)*r);
    return volume;
}

int main(){
    float rad;
    printf("Enter Radius: ");
    scanf("%f",&rad);
    printf("Volume of a sphere with a radius of %f : %f\n",rad,VolSphere(rad));
    return 0;
}