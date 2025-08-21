#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    FILE *fp;
    char name[50];
    int age;
    char DOB[20];
    char Designation[100];
    char filename[100];   
    time_t t;
    struct tm *tm_info;
    char curr_time[40];

    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    
    snprintf(filename, sizeof(filename), "%s.txt", name);

    fp = fopen(filename, "w");
    

    time(&t);
    tm_info = localtime(&t);
    strftime(curr_time, sizeof(curr_time), "%d-%m-%Y %H:%M:%S", tm_info);

    
    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); 

    printf("Enter your Date of Birth (DD-MM-YYYY): ");
    fgets(DOB, sizeof(DOB), stdin);
    DOB[strcspn(DOB, "\n")] = 0; 

    printf("Enter your Designation: ");
    fgets(Designation, sizeof(Designation), stdin);
    Designation[strcspn(Designation, "\n")] = 0; 

    
    fprintf(fp, "------ Biodata ------\n");
    fprintf(fp, "Recorded On: %s\n", curr_time);
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);
    fprintf(fp, "Date of Birth: %s\n", DOB);
    fprintf(fp, "Designation: %s\n", Designation);

    fclose(fp);

    printf("Data written to %s successfully.\n", filename);

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    
    snprintf(filename, sizeof(filename), "%s.txt", name);

    fp = fopen(filename, "w");
    

    time(&t);
    tm_info = localtime(&t);
    strftime(curr_time, sizeof(curr_time), "%d-%m-%Y %H:%M:%S", tm_info);

    
    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); 

    printf("Enter your Date of Birth (DD-MM-YYYY): ");
    fgets(DOB, sizeof(DOB), stdin);
    DOB[strcspn(DOB, "\n")] = 0; 

    printf("Enter your Designation: ");
    fgets(Designation, sizeof(Designation), stdin);
    Designation[strcspn(Designation, "\n")] = 0; 

    
    fprintf(fp, "------ Biodata ------\n");
    fprintf(fp, "Recorded On: %s\n", curr_time);
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);
    fprintf(fp, "Date of Birth: %s\n", DOB);
    fprintf(fp, "Designation: %s\n", Designation);

    fclose(fp);

    printf("Data written to %s successfully.\n", filename);

    return 0;
}
