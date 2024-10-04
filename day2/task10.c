#include <stdio.h>

void stringCopy(char *dest, const char *stringCompare) {
    while (*stringCompare != '\0') {
        *dest = *stringCompare;
        dest++;
        stringCompare++;
    }
    *dest = '\0';
}

void stringConcatenate(char *dest, const char *stringCompare) {
    while (*dest != '\0') {
        dest++;
    }
    while (*stringCompare != '\0') {
        *dest = *stringCompare;
        dest++;
        stringCompare++;
    }
    *dest = '\0';
}

int stringCompare(const char *str1, const char *str2) {
    while (*str1 == *str2) {
        if (*str1 == '\0')
            return 0;
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main() {
    char str1[100], str2[100], str3[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Copy
    stringCopy(str3, str1);
    printf("Copied string: %s\n", str3);

    // Concatenate
    stringConcatenate(str3, str2);
    printf("Concatenated string: %s\n", str3);

    // Compare
    int result = stringCompare(str1, str2);
    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("First string is lexicographically smaller\n");
    else
        printf("Second string is lexicographically smaller\n");

    return 0;
}