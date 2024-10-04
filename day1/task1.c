#include <stdio.h>
#include <string.h>

#define MAX_STATIONS 100

int linearSearch(char stations[][50], int n, const char* target) {
    for (int i = 0; i < n; i++) {
        if (strcmp(stations[i], target) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    char stations[MAX_STATIONS][50] = {"Sealdah", "Bidhannagar", "Dum Dum", "Madhyamgram", "Hridaypur", "Barasat"};
    int numStations = 6;
    const char* target = "Madhyamgram";

    int result = linearSearch(stations, numStations, target);

    if (result != -1) {
        printf("%s is found on the route at position %d.\n", target, result + 1);
    } else {
        printf("%s is not found on the route.\n", target);
    }

    return 0;
}