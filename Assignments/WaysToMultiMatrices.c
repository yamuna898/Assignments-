#include <stdio.h>

int ways(int n) {
    int C[n];
    C[0] = 1;
    C[1] = 1;

    for (int i = 2; i <= n-1; i++) {
        C[i] = 0;
        for (int j = 0; j < i; j++) {
            C[i] += C[j] * C[i - 1 - j];
        }
    }
    return C[n-1];
}

int main() {
    int m;

    printf("Enter number of matrices: ");
    scanf("%d", &m);

    printf("\n===========Order of all matrix should be same==============\n");

    printf("\nNumber of possible ways to multiply %d matrices: %d\n", m,ways(m));

    return 0;
}
