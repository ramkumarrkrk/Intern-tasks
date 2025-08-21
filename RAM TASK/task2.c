#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fp;
    char name[50];
    int age;
    char DOB[20];
    char Designation[100];
    time_t t;                
    struct tm *tm_info;     
    char curr_time[40];   

    fp = fopen("sabik.txt", "w");
    time(&t);
    tm_info = localtime(&t);
    strftime(curr_time, sizeof(curr_time), "%d-%m-%Y %H:%M:%S", tm_info);

    fp = fopen("Sabik.txt", "w");
    printf("Enter your name: ");

    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); 

    printf("Enter your Date of Birth (DD-MM-YYYY): ");
    fgets(DOB, sizeof(DOB), stdin);

    printf("Enter your Designation: ");
    fgets(Designation, sizeof(Designation), stdin);

  
    fprintf(fp, "------ Biodata ------\n");
    fprintf(fp, "Recorded On: %s\n", curr_time);
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);
    fprintf(fp, "Date of Birth: %s", DOB);
    fprintf(fp, "Designation: %s", Designation);
    fclose(fp);

    printf("Data written to sabik.txt successfully with timestamp.\n");

    fp = fopen("Ram.txt", "w");
    time(&t);
    tm_info = localtime(&t);
    strftime(curr_time, sizeof(curr_time), "%d-%m-%Y %H:%M:%S", tm_info);

    fp = fopen("Ram.txt", "w");
    printf("Enter your name: ");

    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); 

    printf("Enter your Date of Birth (DD-MM-YYYY): ");
    fgets(DOB, sizeof(DOB), stdin);

    printf("Enter your Designation: ");
    fgets(Designation, sizeof(Designation), stdin);

  
    fprintf(fp, "------ Biodata ------\n");
    fprintf(fp, "Recorded On: %s\n", curr_time);
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);
    fprintf(fp, "Date of Birth: %s", DOB);
    fprintf(fp, "Designation: %s", Designation);

    fclose(fp);

    printf("Data written to ram.txt successfully with timestamp.\n");

    return 0;
}
