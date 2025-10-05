#include <stdio.h>

void printNumbersReverse(int n) {
    if (n <= 0) {
        return;
    }
    printf("%d", n);
    if (n != 1) {
        printf(" ");
    }
    printNumbersReverse(n - 1);
}

int main() {
    int n;

    scanf("%d", &n);

    if (n >= 1 && n <= 1000) {
        printNumbersReverse(n);
        printf("\n");
    } else {
        printf("Please enter a valid value for N (1 <= N <= 1000)\n");
    }

    return 0;
}
