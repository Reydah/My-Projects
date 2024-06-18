#include <stdio.h>

int main() {
    int i;
    float student[10] = {}; // Array to store grades for 10 students
    float S, A; // Variables for sum (S) and average (A)

    printf("Enter the 10 students' grades:\n");

    // Input loop to get grades for each student
    for (i = 0; i < 10; i++) {
        printf("Student-%d: ", i + 1);
        scanf("%f", &student[i]);
    }

    S = 0; // Initialize sum to 0
    // Loop to calculate the sum of all grades
    for (i = 0; i < 10; i++) {
        S = S + student[i];
    }
    A = S / 10; // Calculate the average

    printf("\nStudents' grades:\n");
    // Loop to display each student's grade
    for (i = 0; i < 10; i++) {
        printf("Student-%d: %.2f\n", i + 1, student[i]);
    }

    printf("\nStudents' average: %.2f\n", A); // Display the average with 2 decimal points

    return 0;
}
