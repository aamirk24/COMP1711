#include <stdio.h>

int isPrime(int num)
{
    int result,count=0;
    for (int i = 2; i < num; i++)
    {
        if (num%i==0) {
            count+=1;
        }
    }
    if (count==0) {
        result=1;
        return result;
    }
    else {
        result=0;
        return result;
    }
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d \n",isPrime(a));
    return 0;
}
