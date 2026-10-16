#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    long long a = 1, b = 1, fib;

    if (n == 0 || n == 1) {
        printf("1");
    } else {
        for (int i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }

        printf("%lld", fib);
    }

    return 0;
}
