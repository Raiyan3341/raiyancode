#include <stdio.h>

int main() {
    int number, reverse = 0;

    printf("The number is: ");
    scanf("%d", &number);

    while (number != 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }

    printf("The reverse number is: %d\n", reverse);

    return 0;
}


