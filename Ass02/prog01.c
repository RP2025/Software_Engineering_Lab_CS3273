#include <stdio.h>

int main() {
    // Define an array to store numbers from 1 to 20
    int numbers[20];

    // Populate the array with numbers from 1 to 20
    for (int i = 0; i < 20; ++i) {
        numbers[i] = i + 1;
    }

    // Print the array elements
    printf("Numbers from 1 to 20:\n");
    for (int i = 0; i < 20; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

