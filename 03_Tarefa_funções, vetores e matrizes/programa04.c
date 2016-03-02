#include <stdio.h>

int main() {
    int v[16], i, maior, menor, x;

    for (i = 0; i < 15; ++i) {
        scanf("%d", &v[i] );
        if(i == 0) {
            maior = v[0];
            menor = v[0];
        } else {
            if(v[i] > maior) {
                maior = v[i];
            }
            if(v[i] < menor) {
                menor = v[i];
            }
        }
    }
    printf("%d %d", menor, maior);

    system("pause");

    getch();
}

