#include <stdio.h>
 
int main() {
    FILE *fptr;
    char line[256]; 
 
    
    fptr = fopen("email.csv", "r");
 

    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1; 
    }
 

    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }

    fclose(fptr);
 
    return 0; 
}