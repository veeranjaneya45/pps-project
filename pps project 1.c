#include <stdio.h>

int main() {
    int number;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is odd or even
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
