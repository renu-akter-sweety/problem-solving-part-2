#include <stdio.h>

void printLoveRecursion(int n) {
    if (n <= 0) {
        return;
    }
    printf("I love Recursion\n");
    printLoveRecursion(n - 1);
}

int main() {
    int n;

    scanf("%d", &n);

    if (n >= 1 && n <= 100) {
        printLoveRecursion(n);
    } else {
        printf("");
    }

    return 0;
}
