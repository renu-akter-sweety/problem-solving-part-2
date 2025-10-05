#include <stdio.h>

int calculateSum(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    return arr[n - 1] + calculateSum(arr, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 1 && n <= 1000) {
        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int sum = calculateSum(arr, n);
        printf("%d\n", sum);
    } else {
        printf("Invalid input: n should be in the range [1, 1000]\n");
        return 1; // Return a non-zero value to indicate an error.
    }

    return 0;
}
