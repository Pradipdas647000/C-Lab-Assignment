#include <stdio.h>

char getGrade(float marks) {
    if (marks >= 90) return 'O';
    else if (marks >= 80) return 'E';
    else if (marks >= 70) return 'A';
    else if (marks >= 60) return 'B';
    else if (marks >= 50) return 'C';
    else if (marks >= 40) return 'D';
    else return 'F';
}

int main() {
    int numSubjects;
    float totalMarks = 0, marks;
    
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);
    
    for (int i = 1; i <= numSubjects; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &marks);
        totalMarks += marks;
        
        printf("Grade for subject %d: %c\n", i, getGrade(marks));
    }
    
    float averageMarks = totalMarks / numSubjects;
    printf("Average marks: %.2f\n", averageMarks);
    printf("Overall Grade: %c\n", getGrade(averageMarks));
    
    return 0;
}