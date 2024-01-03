#include <stdio.h>

void shiftLeft(int source[], int k, int size) {
    // Shift elements to the left by 'k' positions
    for (int i = 0; i < size - k; i++) {
        source[i] = source[i + k];
    }

    // Fill the remaining positions with 0
    for (int i = size - k; i < size; i++) {
        source[i] = 0;
    }
}

void printArray(int arr[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf(" ]\n");
}

int main() {
    // Example array
    int source[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(source) / sizeof(source[0]);

    // Number of positions to shift
    int k = 3;

    // Print the original array
    printf("Original Array: ");
    printArray(source, size);

    // Shift left by 'k' positions
    shiftLeft(source, k, size);

    // Print the array after shifting
    printf("After Shifting: ");
    printArray(source, size);

    return 0;
}
