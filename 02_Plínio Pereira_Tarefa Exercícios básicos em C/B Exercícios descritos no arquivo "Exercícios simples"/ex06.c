#include<stdio.h>
#include<math.h>

int main() {
    int x, c, cprimo, aux;

    scanf("%d", &x);
    aux = x;

    if(x % 2 == 0 && x != 2 || x == 1) {
        printf("%d nao eh primo!\n", aux);
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
            printf("%d eh primo!\n", aux);
        } else {
            printf("%d nao eh primo!\n", aux);
        }
    }

    return 0;
}
