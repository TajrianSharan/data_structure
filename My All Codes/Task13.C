#include <stdio.h>

int main() {
    int number, divisor, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Divisors:\n");

    for (divisor = 1; divisor <= number; divisor++) {
        if (number % divisor == 0) {
            printf("%d\n", divisor);
            count++;
        }
    }

    printf("Total %d divisor", count);
    if (count != 1) {
        printf("s");
    }
    printf(".\n");

    return 0;
}
