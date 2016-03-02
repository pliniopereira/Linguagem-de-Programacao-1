#include<stdio.h>
#include<math.h>

int main() {
    int n, soma = 0, c;

    printf("Numero: ");

    scanf("%d", &n);

    for(c = 1; c <= n; ++c){
        if(n % c == 0){
            ++soma;
        }

    }

    printf("%d tem %d divisores\n", n, soma);

    return 0;
}
