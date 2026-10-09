#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int acertos = 0;

    char gabarito[1000], resposta[1000];

    scanf("%d", &N);
    scanf("%s", gabarito);
    scanf("%s", resposta);

    for(int i = 0; i < N; i++) {
        if(gabarito[i] == resposta[i]) {
            acertos++;
        }
    }

    printf("%d", acertos);

    return 0;
}
