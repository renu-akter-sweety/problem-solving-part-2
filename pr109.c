#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[N][M];

    // Input the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the last row
    for (int j = 0; j < M; j++) {
        printf("%d ", matrix[N - 1][j]);
    }
    printf("\n");

    // Print the last column
    for (int i = 0; i < N; i++) {
        printf("%d\n", matrix[i][M - 1]);
    }

    return 0;
}
