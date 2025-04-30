#include <stdio.h>

int main() {
    int number, count = 0;

    printf("The number is: ");
    scanf("%d", &number);

    // Handle the case when the number is 0
    if (number == 0) {
        count = 1;
    } else {
        while (number != 0) {
            number /= 10;
            count++;
        }
    }

    printf("Total digits of this number is: %d\n", count);

    return 0;
}
