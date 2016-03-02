#include<stdio.h>
#include <string.h>

int main () {
    double x;
    scanf("%lf", &x);

    printf("Menu de Opções\nA- Imposto\nB- Novo salário\nC- Classificação\n");

    char O;

    scanf("%s", &O);
    switch (O) {
    case 'A' :
        if(x < 500) {
            printf("SALARIOS PERCENTUAL DO IMPOSTO: %.2lf", x*0.05);
            break;
        }
        if(750 < x >= 450) {
            printf("SALARIOS PERCENTUAL DO IMPOSTO: %.2lf", x*0.1);

        } else {
            printf("SALARIOS PERCENTUAL DO IMPOSTO: %.2lf", x*0.15);

        }
        break;
    case 'B' :
        if(x < 450) {
            printf("SALARIO AUMENTO: %.2lf", x+100);
            break;
        }
        if(850 < x >= 500) {
            printf("SALARIO AUMENTO: %.2lf", x+75);
            break;

        }
        if(1500 < x >= 750) {
            printf("SALARIO AUMENTO: %.2lf", x+50);
            break;

        } else {
            printf("SALARIO AUMENTO: %.2lf", x+25);

        }
        break;
    case 'C' :
        if(x <= 700) {
            printf("Mal remunerado\n");
            break;

        } else {
            printf("Bem remunerado\n");

        }
        break;
    default :
        printf ( "\nEntrada invalida!" );
        break;

        system("pause");

        getch();

        return 0;
    }
}
