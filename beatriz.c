#include <stdio.h>
#include <stdlib.h>

const long long MOD = 1000000007;

void formula() {
    int m;
    scanf("%d", &m);

    if (m == 0) {
        return;
    }

    long long *memoria = (long long*)calloc(m + 1, sizeof(long long));
    if (memoria == NULL) {
        return;
    }

    if (m >= 1) memoria[1] = 1;
    if (m >= 2) memoria[2] = 2;
    if (m >= 3) memoria[3] = 4;
    if (m >= 4) memoria[4] = 8;

    for (int i = 5; i <= m; ++i) {
        long long plazo1 = (2 * memoria[i - 1]) % MOD;
        long long plazo2 = memoria[i - 4];
        memoria[i] = (plazo1 - plazo2 + MOD) % MOD;
    }

    for (int i = 1; i <= m; ++i) {
        printf("%lld%s", memoria[i], (i == m ? "" : " "));
    }
    printf("\n");

    free(memoria);
}

int main() {
    formula();
    return 0;
}
