#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char frase[1000];

void imprimeInverdido(char *frase) {
    int i, tamanho=strlen(frase);

    for (i = tamanho-1; i>= 0; i--) {
        if (frase[i]=='a') {
            frase[i]='*';
        }
        printf("%c", frase[i]);
    }
    printf("\n");
}


int main() {
    setlocale(LC_ALL,"Portuguese");

    printf("Entre a frase: ");
    scanf("%s", &frase);

    imprimeInverdido(&frase);

    system("pause");

    getch();
}
