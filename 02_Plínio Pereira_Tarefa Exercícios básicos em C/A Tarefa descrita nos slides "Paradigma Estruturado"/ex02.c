/*/* PERIM.C - informa o perímetro de uma circunferência /* <- não está fechando o comentario
#include <studio.h> é stdio.h
#define PI = 3.1415 <- = desnecessario, causando erro
Main() {  M deve ser minusculo
float raio;
clrscr; variavel nao declarada
printf("\n Qual a medida do raio? ");
scanf("%f", &raio);
float perim;
perim := 2*PI*raio; : desnecessario
printf("\n O perímetro é %f", perim);
}*/

/* PERIM.C - informa o perímetro de uma circunferência */
#include <stdio.h>
#define PI 3.1415
main() {
    float raio;
    printf("\n Qual a medida do raio? ");
    scanf("%f", &raio);
    float perim;
    perim = 2 * PI * raio;
    printf("\n O perímetro é %f", perim);
}


