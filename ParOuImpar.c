#include <stdio.h>
#include <stdlib.h>

int main(){
    int P, I;
    scanf("%d", &P);
    scanf("%d", &I);

    if ((P + I) % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");

    return 0;
}
