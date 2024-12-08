#include <stdio.h>
int sumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit; // Logical error: Adds the digit itself, not its square
        num /= 10;
    }
    return sum;
}
int isHappyNumber(int num) {
    int slow = num, fast = num;
    do {
        slow = sumOfSquares(slow);              // Move one step
        fast = sumOfSquares(sumOfSquares(fast)); // Move two steps
    } while (slow != fast);

    return slow == 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isHappyNumber(num)) {
        printf("%d is a happy number", num);
    } else {
        printf("%d is not a happy number", num);
    }

    return 0;
}
