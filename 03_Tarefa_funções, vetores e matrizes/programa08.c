#include<stdio.h>


int adicao(int x, int y) {
    int resp;

    resp = x + y;

    printf("O resultado da adicao foi: %d\n", resp);
}

int subtracao(int x, int y) {
    int resp;

    resp = x - y;

    printf("O resultado da subtracao foi: %d\n", resp);
}

int multiplicao(int x, int y) {
    int resp;

    resp = x * y;

    printf("O resultado da divisao foi: %d\n", resp);
}


int main () {

    int x, y, s;

    printf("Entre com dois numeros inteiros: ");

    scanf("%d %d", &x, &y);

    printf("Selecione a operacao desejada:\n1 - adicao\n2 - subtracao\n3 - multiplicacao\n");

    scanf("%d", &s);



    switch (s) {
    case 1 :
        adicao(x, y);
        break;
    case 2 :
        subtracao(x, y);
        break;
    case 3 :
        multiplicao(x, y);
        break;
    default :
        printf ( "\nEntrada invalida!" );
        break;


        return 0;
    }
    system("pause");

    getch();
}
