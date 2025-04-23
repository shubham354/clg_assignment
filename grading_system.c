#include <stdio.h>

#define SUBJECTS 5

// Function prototypes
void input_marks(float marks[]);
float calculate_total(float marks[]);
float calculate_average(float total);
char calculate_grade(float average);
void display_result(float marks[], float total, float average, char grade);

int main() {
    float marks[SUBJECTS], total, average;
    char grade;

    printf("--- Student Marks & Grade Management System ---\n");

    input_marks(marks);
    total = calculate_total(marks);
    average = calculate_average(total);
    grade = calculate_grade(average);
    display_result(marks, total, average, grade);

    return 0;
}

void input_marks(float marks[]) {
    for (int i = 0; i < SUBJECTS; i++) {
        do {
            printf("Enter marks for subject %d (0-100): ", i + 1);
            scanf("%f", &marks[i]);
            if (marks[i] < 0 || marks[i] > 100) {
                printf("Invalid input! Marks should be between 0 and 100.\n");
            }
        } while (marks[i] < 0 || marks[i] > 100);
    }
}

float calculate_total(float marks[]) {
    float sum = 0;
    for (int i = 0; i < SUBJECTS; i++) {
        sum += marks[i];
    }
    return sum;
}

float calculate_average(float total) {
    return total / SUBJECTS;
}

char calculate_grade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 75) return 'B';
    else if (average >= 60) return 'C';
    else if (average >= 40) return 'D';
    else return 'F';
}

void display_result(float marks[], float total, float average, char grade) {
    printf("\n--- Report Card ---\n");
    for (int i = 0; i < SUBJECTS; i++) {
        printf("Subject %d: %.2f\n", i + 1, marks[i]);
    }
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);
}
