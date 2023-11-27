#include <stdio.h>

int main()
{
    // makes a new int called 'var' with value 10
    int var=10;

    //  creates a int pointer called var_address and set it to address of the var
    int* var_address=&var;

    printf("\n");
    printf("The content of \"var\" = %d\n",var);

    printf ("The content \"var_address\" = %p\n", var_address);

    printf ("Now the magic ! Content of \"*var_address\" = %d\n", *var_address);
    
    printf("\n");
}