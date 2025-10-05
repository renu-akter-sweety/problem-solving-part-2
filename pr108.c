 #include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int mat[a][b];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int Jadu= 1;
    for (int i = 0; i < a; i++) {
        if (mat[i][i] != 1) {
            Jadu = 0;
            break;
        }
    }
    for (int i = 0; i < a; i++) {
        if (mat[i][a- i - 1] != 1) {
            Jadu= 0;
            break;
        }
    }
    for (int i=0;i<b;i++) {
        for (int j=0; j<b;j++) {
            if (i!=j && i!=(b-j-1)&& mat[i][j]!= 0) {
                Jadu= 0;
                break;
            }
        }
    }

    if (Jadu)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
