/*4-Faça um programa que use uma estrutura para armazenar os atributos de uma circunferência C,isto é, raio e centro.
O programa deve permitir as seguintes funcionalidades:
a) calcularcomprimento da circunferência
b) calcular a área do círculo envolto pela circunferência
c) desenharcircunferência na tela.
Use funções.*/

#include <stdio.h>

const double pi = 3.14;

void area(double raio) {
    double area;
    area = pi * raio * raio;
    printf("Area %.2lf\n", area);

}
void calcularcomprimento(double raio) {
    double comprimento;
    comprimento = 2 * pi * raio;
    printf("Comprimento %.2lf\n", comprimento);

}

int main() {

    double raio;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    calcularcomprimento(raio);
    area(raio);


    return 0;
}

