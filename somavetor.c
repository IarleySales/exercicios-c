#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int n, int v[]){
    int soma = 0;
    for(int i = 0; i < n; i++)
        soma += v[i];
    return soma;
}

int main(){
    int n, v[100100];
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("%d\n", soma_vetor(n, v));
    return 0;
}
