#include <stdio.h>
int main() {
    int mark;
    printf("Enter Marks: ");
    scanf("%d", &mark);
    if (mark>=0 && mark<=100){
        if (mark>=40){
            if (mark>70){
                printf("The mark of %d is a pass and a first\n",mark);
            }
            else if (mark>60 && mark<=70){
                printf("The mark of %d is a pass and 2:1\n",mark);
            } 
            else{
                printf("The mark of %d is a pass\n",mark);
            }
        }
        else if (mark < 40){ 
            printf ("The mark of %d is a fail\n", mark);
            }
    }
    else{
        printf("Marks should be between 0 and 100. \n");
    }
    return 0;
}