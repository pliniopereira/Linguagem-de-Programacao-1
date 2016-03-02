#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if(x%2 == 0) {
        printf("É par!");
    } else {
        printf("É ímpar!");
    }
    return 0;
}
