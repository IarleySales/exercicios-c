#include <stdio.h>
#include <stdlib.h>

int main(){
    long long n;
    int count = 0;
    scanf("%lld", &n);
    while(n != 1){
        if(n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
