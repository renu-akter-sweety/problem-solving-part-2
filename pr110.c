#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Print the tree
    for (int i = 0; i < N; i++) {
        // Print spaces
        for (int j = 0; j < N - i - 1; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the trunk
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
