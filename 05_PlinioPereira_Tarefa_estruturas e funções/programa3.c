/*3- Crie um programa, utilizando um vetor de struct que guarda o nome, RG
e ano de nascimento de,no máximo, 10 pessoas.
O programa permite as seguintes funcionalidades, conforme escolha dousuário:
a - Cadastrar uma pessoa;
b - Calcular a idade de uma pessoa selecionada pelo usuário;
c - Listar pessoas que nasceram a partir de um determinado ano;
d - Listar pessoas que nasceram antes de um determinado ano;
e- Encontrar o nome de uma pessoa com determinado RG;
s- Sair.
O programa deverá ser executado em loop até o usuário digitar a opção s.
Implemente funçõespara as opções disponíveis*/

#include<stdio.h>
#include<locale.h>

typedef struct P {
    char nome[40];
    char RG[10];
    int anoAAAA;
    struct P *prox;
} PESSOA;


//funções
void cadastraPessoa(PESSOA *p) {
    printf("Digite o nome: ");
    scanf("%s",&p->nome);
    printf("Digite o RG: ");
    scanf("%s",&p->RG);
    printf("Digite o ano de nascimento [AAAA]: ");
    scanf("%d",&p->anoAAAA);
    printf("\t---\n");
    p->prox = NULL;
}

void calculaIdade(PESSOA *P_) {
    PESSOA *selecionada = NULL, *P=P_;
    char RG[10];
    printf("Entre com o RG da pessoa: ");
    scanf("%s", &RG);
    while (P) {
        if (strcmp(RG,P->RG)==0) {
            selecionada=P;
            break;
        }
        P=P->prox;
    }
    if (!selecionada) {
        printf("RG %s não encontrado.\n", RG);
    } else {
        int idade = 2015-P->anoAAAA;
        printf("Pessoa encontrada! %s \n", P->nome);
        printf("Idade da pessoa %s é: %d\n", P->nome, idade);
    }
}

void listaAPartirAno(PESSOA *P_) {
    PESSOA *P=P_;
    int ano;
    printf("Entre o ano [AAAA]: ");
    scanf("%d", &ano);
    while (P) {
        if (P->anoAAAA>ano) {
            printf("Pessoa %s nasceu em %d.\n", P->nome, P->anoAAAA);
        }
        P=P->prox;
    }
}

void listaAntesAno(PESSOA *P_) {
    PESSOA *P=P_;
    int ano;
    printf("Entre o ano [AAAA]: ");
    scanf("%d", &ano);
    while (P) {
        if (P->anoAAAA<ano) {
            printf("Pessoa %s nasceu em %d.\n", P->nome, P->anoAAAA);
        }
        P=P->prox;
    }
}

void buscaRG(PESSOA *P_) {
    PESSOA *selecionada = NULL, *P=P_;
    char RG[10];
    printf("Entre com o RG da pessoa: ");
    scanf("%s", &RG);
    while (P) {
        if (strcmp(RG,P->RG)==0) {
            selecionada=P;
            break;
        }
        P=P->prox;
    }
    if (!selecionada) {
        printf("RG %s não encontrado.\n", RG);
    } else {
        printf("Pessoa encontrada! %s \n", P->nome);
    }
}



int main() {
    setlocale(LC_ALL,"Portuguese");
    PESSOA *primeiro = NULL;
    int opcao;
    int resp;
    //system("cls"); //windows
    system("clear"); //linux
    do {
        printf("Selecione:\n1-Cadastrar uma pessoa;\n2-Calcular a idade de uma pessoa selecionada pelo usuário;\n3-Listar pessoas que nasceram a partir de um determinado ano;\n4-Listar pessoas que nasceram antes de um determinado ano;\n5-Encontrar o nome de uma pessoa com determinado RG;\n6-Sair.\nSua escolha: \n");
        scanf("%d",&opcao);
        system("clear");
        switch (opcao) {
        case 1:
            printf("1-Cadastrar uma pessoa: \n");
            if(primeiro) {
                PESSOA *ultimo = primeiro;
                while (ultimo->prox) ultimo = ultimo->prox;
                ultimo->prox = malloc(sizeof (struct P));
                cadastraPessoa(ultimo->prox);
            } else {
                primeiro = malloc(sizeof (struct P));
                cadastraPessoa(primeiro);
            }
            break;
        case 2:
            printf("2-Calcular a idade de uma pessoa selecionada pelo usuário: \n");
            calculaIdade(primeiro);
            break;
        case 3:
            printf("3-Listar pessoas que nasceram a partir de um determinado ano: \n");
            listaAPartirAno(primeiro);
            break;
        case 4:
            printf("4-Listar pessoas que nasceram antes de um determinado ano: \n");
            listaAntesAno(primeiro);
            break;
        case 5:
            printf("5-Encontrar o nome de uma pessoa com determinado RG: \n");
            buscaRG(primeiro);
            break;
        case 6:
            break;
        }
    } while (opcao!=6);

}
