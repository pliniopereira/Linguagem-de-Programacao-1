#include<stdio.h>


double separa(double x) {
    int z;
    double y;

    z = (int)x;
    y = x - z;

    printf("Parte inteira: %d\n", z);
    printf("Parte fracionaria: %lf\n", y);

}

int main() {

    double x;

    scanf("%lf", &x);

    separa(x);

    system("pause");

    getch();

    return 0;
}
