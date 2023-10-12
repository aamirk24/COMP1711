#include <stdio.h>
int main() {
    double s,sd,days,dist;
    s=1079252848.7999;
    sd=s*24;
    printf("Enter days:");
    scanf("%lf",&days);
    dist=sd*days;
    printf("Distance travelled by light in %.1cf days: %.3f kilometers\n",days,dist);
    return 0; 
    
    
}