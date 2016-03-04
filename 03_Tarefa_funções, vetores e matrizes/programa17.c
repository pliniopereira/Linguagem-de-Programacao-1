#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char S1[20], S2[20];

void imprimeInverdido(char *frase) {
    int i, tamanho=strlen(frase);

    for (i = tamanho-1; i>= 0; i--) {
        printf("%c", frase[i]);
    }
    printf("\n");
}


int main() {
    setlocale(LC_ALL,"Portuguese");


    //(a)
    printf("Entre a frase 1: ");
    scanf("%s", &S1);

    //(b)
    printf("Tamanho da string S1: %d\n", strlen(S1));

    //(c)
    printf("Entre a frase 2: ");
    scanf("%s", &S2);
    int ret;

    ret = strncmp(S1, S2, 20);

    if(ret == 0) {
        printf("As duas strings são iguais.\n");
    }

    if(strlen(S1) > strlen(S2)) {
        printf("S1 é maior que S2.\n");
    }
    if(strlen(S1) < strlen(S2)) {
        printf("S1 é maior que S2.\n");
    }
    if (strlen(S1) == strlen(S2) && ret != 0) {
        printf("S1 e S2 são diferentes mas tem o mesmo tamanho.\n");
    }

    //(d)
    char aux1[20], aux2[20] ;
    strcpy (aux1, S1);
    strcpy (aux2, S1);
    char *res = strcat(aux1, S2);

    printf("Concatenando strings:\n");
    printf("%s\n", res);

    //(e)
    printf("Imprimindo a string S1 de forma reversa:\n");
    imprimeInverdido(&S1);

    //(f)
    int cont = 0, i;
    char caractere[1];

    printf("Entre com o caractere: ");
    scanf("%s", caractere[0]);
    
    aux2

    for (i = 0; i <= strlen(aux2); ++i) {
        if (aux2[i] == caractere[0]){
            cont++;
        }
    }

    printf("Existem %d do caractere dentro da frase!", cont);







    return 0;
}

