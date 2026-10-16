#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long fatorial = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%lld", fatorial);

    return 0;
}
