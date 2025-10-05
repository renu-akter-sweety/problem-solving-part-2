#include <stdio.h>

void printEvenIndicesReversed(int arr[], int n, int index) {
    if (index < 0) {
        return;
    }

    if (index % 2 == 0) {
        printf("%d", arr[index]);
        if (index > 0) {
            printf(" ");
        }
    }

    printEvenIndicesReversed(arr, n, index - 1);
}

int main() {
    int n;

    scanf("%d", &n);

    if (n >= 1 && n <= 1000) {
        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printEvenIndicesReversed(arr, n, n - 1);
        printf("\n");
    } else {

    }

    return 0;
}
