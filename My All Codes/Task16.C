#include <stdio.h>

int main() {
    int quantity, number;
    int maximum, minimum;
    double sum = 0.0;
    double average;

    printf("Enter the quantity of numbers: ");
    scanf("%d", &quantity);

    printf("Enter %d numbers:\n", quantity);


    scanf("%d", &number);
    maximum = minimum = number;
    sum += number;


    for (int i = 1; i < quantity; i++) {
        scanf("%d", &number);
        sum += number;

        if (number > maximum) {
            maximum = number;
        }
        if (number < minimum) {
            minimum = number;
        }
    }

    average = sum / quantity;

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);
    printf("Average is %.2f\n", average);

    return 0;
}
