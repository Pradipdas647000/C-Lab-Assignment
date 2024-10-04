#include <stdio.h>

struct distance {
    int feet;
    int inches;
};

struct distance addTwo(struct distance d) {
    d.inches += 2;
    if (d.inches >= 12) {
        d.feet += d.inches / 12;
        d.inches %= 12;
    }
    return d;
}

int main() {
    struct distance distance;
    
    printf("Enter distance in feet and inches:\n");
    printf("Feet: ");
    scanf("%d", &distance.feet);
    printf("Inches: ");
    scanf("%d", &distance.inches);

    struct distance newDistance = addTwo(distance);

    printf("Original distance: %d feet %d inches\n", distance.feet, distance.inches);
    printf("After adding 2 inches: %d feet %d inches\n", newDistance.feet, newDistance.inches);

    return 0;
}