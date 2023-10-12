#include <stdio.h>
int main() {
    float s_interest,rate,amt;
    int time;
    printf("Enter Rate:");
    scanf("%f",&rate);
    printf("Enter Time (in years) :");
    scanf("%d",&time);
    printf("Enter Principal Amount:");
    scanf("%f",&amt);
    s_interest=(amt*rate*time)/100;
    printf("Simple Interest on given rate, time and principal amount : %.3f \n",s_interest);
    return 0;
}
