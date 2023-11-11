#include <stdio.h>

float calc(float num1, float num2, char operand[1])
{
    float result;
    if (operand=="+"){
        result=num1+num2;
        return result;
    }
    else if (operand=="-"){
        result=num1-num2;
        return result;
    }
    else if (operand=="*"){
        result=num1*num2;
        return result;
    }
    else if (operand=="/"){
        result=num1/num2;
        return result;
    }
    else{
        printf("Enter a valid operator.\n");
        return 0;
    }
}

int main(){
    float a,b;
    char op;
    printf("Enter numer 1: ");
    scanf("%f",&a);
    printf("Enter number 2: ");
    scanf("%f",&b);
    printf("Enter an operand: ");
    scanf(" %c",op);
    printf("%f %c %f = %f",a,op,b,calc(a,b,op));
}