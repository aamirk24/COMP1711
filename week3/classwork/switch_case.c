#include <stdio.h>
int main() {
    int a;
    printf("Enter your option: ");
    scanf("%d",&a);
    switch (a){ 
        case 0: printf ("Option 0 has been selected\n");
        break;
        case 1: printf ("Option 1 has been selected\n");
        break;
        case 2: printf ("Option 2 has been selected.\n");
        break;
        case 3: printf ("Option 3 has been selected\n");
        break;
        default: printf ("Please choose a valid option.\n");
        }
    }