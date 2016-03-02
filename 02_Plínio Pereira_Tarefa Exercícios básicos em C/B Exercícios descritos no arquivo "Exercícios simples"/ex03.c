#include<stdio.h>
#include<math.h>

int main() {
    int n, x, soma = 0, caux = 0;

    printf("Numero: ");


    scanf("%d", &n);

    for(x = 1; caux < n; ++x) {
        if(x % 2 == 0 && x != 2 || x == 1) {
        } else {
            int c, cprimo = 1;
            for (c = 1; c <= sqrt(x); ++c) {
                if(x % c == 0) {
                    cprimo += 1;
                } else if(cprimo == 3) {
                    c = x;
                }
            }

            if(cprimo == 2) {
                if(caux == (n - 1)) {
                    soma += x;
                    printf("%d ", x);
                    ++caux;

                } else {
                    soma += x;
                    printf("%d + ", x);
                    ++caux;
                }


            }

        }

    }
    printf("= %d\n", soma);
    return 0;
}
