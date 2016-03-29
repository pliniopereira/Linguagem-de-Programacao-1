/*5 - Usando o programa do WiFi apresentado em aula,
melhore-o de forma que ele leia  três roteadores e
calcule se algum deles permite que seu sinal seja captado por um dispositivo na posição (x,y)*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct wifi {
    float xo;
    float yo;
    float raio;
} WF;

WF eq;
WF tabW[3];

void ler_equi() {
    printf("\nDigite o raio de equipamento:\n");
    scanf("%f",&eq.raio);
    printf("\nDigite a posicao no eixo x:\n");
    scanf("%f",&eq.xo);
    printf("\nDigite a posicao no eixo y:\n");
    scanf("%f",&eq.yo);
}

void ler_varios() {
    int i;
    for(i = 0; i < 3; ++i) {
        printf("\nDigite o raio de equipamento:\n");
        scanf("%f",&tabW[i].raio);
        printf("\nDigite a posicao no eixo x:\n");
        scanf("%f",&tabW[i].xo);
        printf("\nDigite a posicao no eixo y:\n");
        scanf("%f",&tabW[i].yo);
    }

}
float calcular_area_Wifi() {
    return(3.14 * eq.raio * eq.raio);
}
int capta_sinal(float x1, float y1) {
    float b, c, a;
    b = eq.xo-x1;
    c = eq.yo-y1;
    a = sqrt((b*b)+(c*c));
    printf("\na=%.2f,b=%.2f,c=%.2f",a,b,c);
    if (a <= eq.raio)return 1;
    else return 0;
}
int main() {
    char op;
    float h, v;
    int c;

    for(c = 0; c < 3; ++c) {
        printf("\n1-ler atributos\n2-area\n3-capta?\n4-sair\n5-ler tres roteadores\n");
        op=getche();
        switch(op) {
        case '1':
            ler_equi();
            break;
        case '2':
            printf("\nArea: %.2f",calcular_area_Wifi());
            break;
        case '3':
            printf("\nDigite a posicao do dispositivo(x,y)\n");
            scanf("%f,%f",&h,&v);
            if(capta_sinal(h,v)==1) printf("\nDentro da area\n");
            else                    printf("\nFora da area\n");
            break;
        case '4':
            printf("Saindo");
            break;
        case '5':
            ler_varios();
        default:
            printf("\nOp invalida\n");
        }
    }


    return 0;
}


