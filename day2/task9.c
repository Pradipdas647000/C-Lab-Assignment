#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;
    int i;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    printf("The array elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}