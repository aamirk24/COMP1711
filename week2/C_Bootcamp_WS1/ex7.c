#include <stdio.h>
int main() {
    float temp_f, temp_c;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&temp_f);
    temp_c= ((temp_f-32)*5)/9;
    printf("%f fahrenheit is %.2f celsius. \n",temp_f,temp_c);
    return 0;
}