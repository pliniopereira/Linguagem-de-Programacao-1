#include<stdio.h>

int main() {
    int n, resposta = 1, aux;
    scanf("%d", &n);
    aux = n;

    for(; n >= 1; --n) {
        resposta *= n;
    }

    printf("%d! = %d \n", aux, resposta);

    return 0;
}
