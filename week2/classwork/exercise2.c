#include <stdio.h> 
int main() {
    char name[20];
    printf("Enter name:");
    scanf("%s",name);
    printf("Reversed name: %s \n",strrev(name));
    return 0;

}