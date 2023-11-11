#include "utils.h"

int main () {
    char* filename = "data.txt";
    FILE *file = open_file(filename, "w");
    // FILE *file = fopen (filename, "w"); // or "a", "w+", "a+"
    // if (file == NULL) {
    //     printf("Error opening file\n");
    //     return 1;
    // }
    fprintf(file,"Hello World!\n");

    fclose(file);
    return 0;
}