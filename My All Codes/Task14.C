#include <stdio.h>

int main() {
    int number, divisor, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (divisor = 1; divisor < number; divisor++) {
        if (number % divisor == 0) {
            sum += divisor;
        }
    }

    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
