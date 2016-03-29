#include <stdio.h>

typedef struct{
    char nome[31];
    int idade;//faltava ; no fim de cada linha
    } PESSOA;

main(){
    PESSOA *p;
    PESSOA x = {"Silvio", 32};
    p = &x;
    printf("\n%s,%d\n", (*p).nome, (*p).idade );//faltava um * antes de p.idade
    system("pause");
}

/*Questão A)
Linha  5: faltava ; no fim de cada linha
Linha 12: faltava um * antes de p.idade
*/

/*Questão B)
Sim, é correta. Desta forma apenas o nome é impresso.*/
