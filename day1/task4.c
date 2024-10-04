#include <stdio.h>

int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int isPalindrome(const char* str) {
    int left = 0;
    int right = stringLength(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0;  
        }
        left++;
        right--;
    }

    return 1; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}