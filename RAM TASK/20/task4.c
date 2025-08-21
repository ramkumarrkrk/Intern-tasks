#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int n, choice, i;
    int *scores = NULL;
 
    printf("Enter initial number of students: ");
    scanf("%d", &n);
 
    
    scores = (int *)malloc(n * sizeof(int));
    if (scores == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
 
   
    printf("Enter the scores of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Score of student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
 
    do {
        printf("\n--- Menu ---\n");
        printf("1. Display Scores\n");
        printf("2. Update a Score\n");
        printf("3. Add More Students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
 
        switch (choice) {
            case 1: 
                printf("\nStudent Scores:\n");
                for (i = 0; i < n; i++) {
                    printf("Student %d: %d\n", i + 1, scores[i]);
                }
                break;
 
            case 2:
                {
                    int index, newScore;
                    printf("Enter student number (1-%d) to update: ", n);
                    scanf("%d", &index);
                    if (index < 1 || index > n) {
                        printf("Invalid student number!\n");
                    } else {
                        printf("Enter new score: ");
                        scanf("%d", &newScore);
                        scores[index - 1] = newScore;
                        printf("Score updated successfully!\n");
                    }
                }
                break;
 
            case 3: 
                {
                    int addCount;
                    printf("How many students to add? ");
                    scanf("%d", &addCount);
 
                    scores = (int *)realloc(scores, (n + addCount) * sizeof(int));
                    if (scores == NULL) {
                        printf("Memory reallocation failed!\n");
                        return 1;
                    }
 
                    printf("Enter scores for %d new students:\n", addCount);
                    for (i = n; i < n + addCount; i++) {
                        printf("Score of student %d: ", i + 1);
                        scanf("%d", &scores[i]);
                    }
                    n += addCount;
                }
                break;
 
            case 4:
                printf("Exiting program...\n");
                break;
 
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);
 
    
    free(scores);
 
    return 0;
}