#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fp;
    char name[50];
    int age;
    int DOB;
    char Designation[100];
    fp = fopen("Biodata", "w");

    

    printf("Enter your name: ");
    scanf("%s", name); 
    printf("Enter your age: ");
    scanf("%d", &age); 
    printf("Enter your Date of Birth: ");
    scanf("%d", &DOB);
    printf("Enter your Designation: ");
    scanf("%s", Designation);

   
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);
    fprintf(fp, "Date of Birth: %d\n", DOB);
    fprintf(fp, "Designation: %s\n", Designation);


    fclose(fp);

    printf("Data written to Biodata.txt successfully.\n");

    return 0; 
}
