/*2 – Use estrutura apresentada no exercício 1 e elabore um programa para cadastrar 10 pessoas.*/

#include<stdio.h>
#include<locale.h>

typedef struct{
    char nome[31];
} PESSOA;


int main(){
    setlocale(LC_ALL, "Portuguese");
    fflush(stdin);
    int c;

    PESSOA cadastro[20];

    for(c = 0; c < 10; ++c){
        printf("Digite a pessoa numero %d:\n: ", c + 1);
        gets(cadastro[c].nome);
    }

    for(c = 0; c < 10; ++c){
        printf("A pessoa numero %d se chama %s!\n ", c + 1, cadastro[c].nome);
    }

    system("pause");
}
