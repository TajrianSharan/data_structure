
#include <stdio.h>

int main() {
    int number, divisor, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (divisor = 1; divisor <= number; divisor++) {
        if (number % divisor == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
