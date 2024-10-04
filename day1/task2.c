#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50

int isStudentPresent(char students[][50], int n, const char* target) {
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i], target) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char students[MAX_STUDENTS][50] = {"Amit", "Bipasha", "Chandan", "Debasmita", "Esha"};
    int numStudents = 5;
    const char* target = "Debasmita";

    if (isStudentPresent(students, numStudents, target)) {
        printf("%s is present in the class.\n", target);
    } else {
        printf("%s is absent from the class.\n", target);
    }

    return 0;
}