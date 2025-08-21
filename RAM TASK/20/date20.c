#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, choice, newStudents;
    int *scores = NULL;   

    
    printf("Enter initial number of students: ");
    scanf("%d", &n);

   
    scores = (int *)malloc(n * sizeof(int));
    if (scores == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
 
    
    printf("Enter scores for %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Reset all scores to 0 (using calloc)\n");
        printf("2. Add more students (using realloc)\n");
        printf("3. Display all scores\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
           
            free(scores); 
            scores = (int *)calloc(n, sizeof(int));
            if (scores == NULL) {
                printf("Memory allocation failed!\n");
                return 1;
            }
            printf("All scores have been reset to 0.\n");
        }
        else if (choice == 2) {
            
            printf("Enter number of new students to add: ");
            scanf("%d", &newStudents);

            scores = (int *)realloc(scores, (n + newStudents) * sizeof(int));
            if (scores == NULL) {
                printf("Memory reallocation failed!\n");
                return 1;
            }

          
            printf("Enter scores for %d new students:\n", newStudents);
            for (i = n; i < n + newStudents; i++) {
                printf("Student %d: ", i + 1);
                scanf("%d", &scores[i]);
            }

            n += newStudents;
            printf("Added %d new students successfully.\n", newStudents);

            printf("Total number of students now: %d\n", n);
            printf("Scores of all students:\n");
            for (i = 0; i < n; i++) {
                printf("Student %d: %d\n", i + 1, scores[i]);
            }

            continue;


        }
        else if (choice == 3) {
           
            printf("\nStudent Scores:\n");
            for (i = 0; i < n; i++) {
                printf("Student %d: %d\n", i + 1, scores[i]);
            }
        }
        else if (choice == 4) {
            
            free(scores);
            printf("Memory freed. Exiting program.\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
