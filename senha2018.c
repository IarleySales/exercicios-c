#include <stdio.h>
#include <stdlib.h>
int main() {
    int chute;
    int erros = 0;

    while (1) {
        scanf("%d", &chute);

        if (chute == 2018) {
            break;
        }

        erros++;
    }

    printf("%d", erros);

    return 0;
