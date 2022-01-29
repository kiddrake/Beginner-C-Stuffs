#include <stdio.h>
#include <math.h>

double hundredthRound(double num) {
    return round(num * 100) / 100;
}

int main()
{
    double exam1; // Stores first midterm score
    double exam2; // Stores second midterm score
    double exam3; // Stores third midterm score
    double final; // Stores final exam score
    double average; // Stores average score from tests

    printf("Enter midterm #1 score -> ");
    scanf_s("%lf", &exam1);
    printf("Enter midterm #2 score -> ");
    scanf_s("%lf", &exam2);
    printf("Enter midterm #3 score -> ");
    scanf_s("%lf", &exam3);
    printf("Enter final exam score -> ");
    scanf_s("%lf", &final);

    if (exam1 > exam2) {
        if (exam2 > exam3) {
            average = (exam1 + exam2 + final * 3) / 5;
        }
        else {
            average = (exam1 + exam3 + final * 3) / 5;
        }
    }
    else {
        if (exam1 > exam3) {
            average = (exam1 + exam2 + final * 3) / 5;
        }
        else {
            average = (exam2 + exam3 + final * 3) / 5;
        }
    }

    printf("\nCourse Average: %.2lf", average);

    if (hundredthRound(average) >= 98) {
        printf("\nGrade Earned: A+");
    }
    else if (hundredthRound(average) > 92) {
        printf("\nGrade Earned: A");
    }
    else if (hundredthRound(average) > 90) {
        printf("\nGrade Earned: A-");
    }
    else if (hundredthRound(average) >= 88) {
        printf("\nGrade Earned: B+");
    }
    else if (hundredthRound(average) >= 82) {
        printf("\nGrade Earned: B");
    }
    else if (hundredthRound(average) >= 80) {
        printf("\nGrade Earned: B-");
    }
    else if (hundredthRound(average) >= 78) {
        printf("\nGrade Earned: C+");
    }
    else if (hundredthRound(average) >= 72) {
        printf("\nGrade Earned: C");
    }
    else if (hundredthRound(average) >= 70) {
        printf("\nGrade Earned: C-");
    }
    else if (hundredthRound(average) >= 68) {
        printf("\nGrade Earned: D+");
    }
    else if (hundredthRound(average) >= 62) {
        printf("\nGrade Earned: D");
    }
    else if (hundredthRound(average) >= 60) {
        printf("\nGrade Earned: D-");
    }
    else {
        printf("\nGrade Earned: F");
    }

    return(0);
}
