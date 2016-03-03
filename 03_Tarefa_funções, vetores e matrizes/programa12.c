#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

char nomes[5][20];
int i, j;

void recebe_nomes() {
    for (i=0; i<5; i++) {
        printf("Digite o %dº nome: ", i+1);
        scanf("%s", &nomes[i]);
    }
    system("cls");
}

void imprime_nomes() {
    for (i=0; i<5; i++) {
        printf("%dº nome: %s\n", i+1, nomes[i]);
    }
}

int eh_alpha() {
    printf("Verificando alfanuméricos na palavra. \n");
    for (i=0; i<5; i++) {
        for (j=0; nomes[i][j]!='\0'; j++) {
            if (!isalpha(nomes[i][j])) {
                return 0;
            }
        }
    }
    return 1;
}

void funcao_b() {
    for (i=0; i<5; i++) {
        for (j=0; nomes[i][j]!='\0'; j++) {
            nomes[i][j]=toupper(nomes[i][j]);
        }
    }
}

int funcao_c() {
    int opcao;
    printf("Qual nome deseja ver? [de 1 a 5]: ");
    scanf("%d", &opcao);
    printf("Nome %d: %s\n", opcao, nomes[opcao-1]);
}


int main () {
    setlocale(LC_ALL,"Portuguese");
    recebe_nomes();
    imprime_nomes();
    if (!eh_alpha()) {
        printf("Você digitou um caractere não alfabético.\n");

    }
    funcao_b();
    imprime_nomes();
    funcao_c();
    system ("pause");
}
