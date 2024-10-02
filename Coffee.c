#include <stdio.h>

int main() {
    float amt, cal;

    // Input the amount of dry coffee in the cup
    printf("Enter the amount of dry coffee in your cup (in grams): ");
    scanf("%f", &amt);

    // Calculate the caffeine content
    cal = amt * 0.008; // Assuming 0.8% of dry coffee weight is caffeine

    // Output the estimated caffeine content
    printf("The amount of caffeine in your cup is: %.2f mg\n", cal);

    return 0;
}
