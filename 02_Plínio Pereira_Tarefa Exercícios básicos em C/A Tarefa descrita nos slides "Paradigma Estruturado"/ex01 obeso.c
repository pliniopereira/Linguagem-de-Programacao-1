#include <stdio.h>
#include <math.h>
#define LIMITE 30
main() {
    float peso, altura, imc;
    //clrscr();
    printf("\n Qual o seu peso e altura? ");
    scanf("%f %f", &peso, &altura);
    imc = peso/pow(altura,2);
    printf("\n Seu i.m.c. é %.1f", imc);
    if( imc <= LIMITE ) printf("\n Você não está obeso!");
    else
        printf("\n Você está obeso!");
    //getch();
    return 0;
}
