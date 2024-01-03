#include <stdio.h>
#include <math.h>

int main() {
    int number, numDigits, divisor, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    numDigits = floor(log10(number)) + 1;
    divisor = pow(10, numDigits - 1);

    printf("Digits from left to right: ");

    while (divisor != 0) {
        digit = number / divisor;
        printf("%d ", digit);

        number %= divisor;
        divisor /= 10;
    }

    return 0;
}
