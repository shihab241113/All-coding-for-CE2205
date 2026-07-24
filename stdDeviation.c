#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float marks[100], sum = 0.0, mean, varianceSum = 0.0, stdDeviation;

    printf("Enter the number of students (max 100): ");
    scanf("%d", &n);

    // Guard rail for array limits
    if (n > 100 || n <= 0) {
        printf("Please enter a number between 1 and 100.\n");
        return 1;
    }

    // Input marks
    printf("Enter %d marks:\n", n);
    for (i = 0; i < n; ++i) {
        printf("Mark %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i]; // Accumulate sum for mean
    }

    // 1. Calculate Mean
    mean = sum / n;

    // 2. Calculate Variance Sum: sum of (mark - mean)^2
    for (i = 0; i < n; ++i) {
        varianceSum += pow(marks[i] - mean, 2);
    }

    // 3 & 4. Divide by N and take the square root
    stdDeviation = sqrt(varianceSum / n);

    // Output results
    printf("\n--- Results ---\n");
    printf("Mean (Average): %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", stdDeviation);

    return 0;
}
