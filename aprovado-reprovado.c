#include <stdio.h>
#include <stdlib.h>

int main(){
 
    double A, B, media;
    scanf("%lf",&A);
    scanf("%lf",&B);

    media = (A + B) / 2;

    if(media >= 7)
        printf("Aprovado\n");
    else if(media >= 4)
        printf("Recuperacao\n");
    else
        printf("Reprovado\n");

    return 0;
}
