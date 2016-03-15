#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int dd, mm, aaaa;
int meses[12] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
int a, b, c, d, e;

char *dia_semana(int n) {
    char *d[] = {
        "erro",
        "domingo",
        "segunda-feira",
        "terça-feira",
        "quarta-feira",
        "quinta-feira",
        "sexta-feira",
        "sábado"
    };
    return d[1 <= n && n <= 7 ? n : 0];
}

/*char dia[][10]={
    "Segunda",
    "Terça",
    "Quarta",
    "Quinta",
    "Sexta",
    "Sábado",
    "Domingo"};*/


void insira() {
    printf("Digite o dia [DD]: ");
    scanf("%d", &dd);
    printf("Digite o mês [MM] (de 1 a 12): ");
    scanf("%d", &mm);
    printf("A partir de 1900, digite o ano [AAAA]: ");
    scanf("%d", &aaaa);
    printf("Data escolhida: %d/%d/%d\n", dd,mm,aaaa);
}

void bissexto() {
    if ((aaaa%4 == 0)&&(aaaa % 100 == 0) && (aaaa % 400 == 0)) {
        b = b/4;
    } else {
        b = b - 1;
    }

}
int main() {
    setlocale(LC_ALL, "Portuguese");
    insira();
    a = aaaa-1900;
    b = a/4;
    bissexto();
    c = meses[mm-1];
    d = dd;
    e = (a + b + c + d) % 7;
    system("cls");
    dia_semana(e);
    printf("O dia da semana foi %s.\n", *d[e]);

    system("pause");

    getch();

    return 0;
}

