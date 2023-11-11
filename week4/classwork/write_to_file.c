#include "utils.h"

int main()
{
    char *filename = "data.txt";

    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    // if (file == NULL)
    // {
    //     printf("Error opening file\n");
    //     return 1;
    // }

    char string[100];
    int num_lines;

    printf("Enter how many numbers to write: ");
    scanf("%d",&num_lines);
    
    // int total=0;
    // float mean;
    
    printf("Type %d strings: ", num_lines);
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%s", string);
        fprintf(file, "%s\n", string);
        // total+=number;
    }

    // mean=total/num_lines;
    // fprintf(file, "%f\n",mean);

    fclose(file);
    return 0;
}