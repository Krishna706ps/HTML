#include <stdio.h>

int main() {
    int marks[5], total_marks = 0;
    float percentage;
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d (out of 100): ", i + 1);
        scanf("%d", &marks[i]);
        total_marks += marks[i];
    }

    percentage = (total_marks / 500.0) * 100;

   
    printf("Total marks obtained: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
