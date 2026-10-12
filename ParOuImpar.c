#include <stdio.h>
#include <stdlib.h>

int main(){
    int Par, Impar;
    scanf("%d", &Par);
    scanf("%d", &Impar);

    if ((Par + Impar) % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");

    return 0;
}
