#include <stdio.h>

int main() {
    int x, z, resposta, aux01, aux02;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite uma potencia: ");
    scanf("%d", &z);
    resposta = x;
    aux01 = x;
    aux02 = z;

    while(z > 1) {

        resposta *= x;
        --z;

    }

    printf("%d elevado a %d eh: %d", aux01, aux02, resposta);


    return 0;
}
