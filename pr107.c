#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long missing_number = M / (A * B * C);

        if (A * B * C * missing_number == M) {
            printf("%lld\n", missing_number);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
