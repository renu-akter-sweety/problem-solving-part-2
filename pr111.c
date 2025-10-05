#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print the upper part of the pattern
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf("  "); // Two spaces
        }
        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the lower part of the pattern
    for (int i = 1; i <= 5; i++) { // Always print 5 more rows
        // Print leading spaces
        for (int j = 1; j <= n - 1; j++) {
            printf("  "); // Two spaces
        }
        // Print asterisk
        printf("*\n");
    }

    return 0;
}
